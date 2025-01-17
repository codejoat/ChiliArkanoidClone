/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game (MainWindow& wnd)
	:
	wnd (wnd),
	gfx (wnd),
	ball (Vec2 (400.0f, 485.0f), Vec2 (300.0f, 300.0f)),
	walls (0.0f, float (gfx.ScreenWidth), 0.0f, float (gfx.ScreenHeight)),
	sound_pad (L"Sounds\\arkpad.wav"),
	sound_brick(L"Sounds\\arkbrick.wav"),
	paddle(Vec2(400.0f, 500.0f), 45.0f, 7.5f)
{
	const Color colors[6] =
	{	Colors::Gray,
		Colors::Red,
		Colors::Yellow,
		Colors::Blue,
		Colors::Magenta,
		Colors::Green
	};

	const Vec2 top_left (40.0f, 40.0f);

	int index = 0;
	for(int y = 0; y < n_bricks_down; ++y) {
		const Color c = colors[y];
		for(int x = 0; x < n_bricks_across; ++x) {
			bricks[index] = Brick (RectF
			(top_left + Vec2 (x * brick_width, y * brick_height), brick_width, brick_height), c);
			++index;
		}
	}
}

void Game::Go()
{
	gfx.BeginFrame();
	float elapsed_time = ft.Mark ();	
	while(elapsed_time > 0.0f) {
		const float dt = std::min (0.0025f, elapsed_time);
		UpdateModel (dt);
		elapsed_time -= dt;
	}
	
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel (float dt)
{
	if(!game_begin) {
		if(wnd.kbd.KeyIsPressed (VK_RETURN)) {
			game_begin = true;
		}
	} else {
		if(ball.BottomCollision ()) {
			game_over = true;
		}

		paddle.Update (wnd.kbd, dt);
		paddle.DoWallCollision (walls);
		ball.Update (dt);

		bool collision_happened = false;
		float current_collision_distance_squared = 0.0f;
		int current_collision_index = 0;
		for(int i = 0; i < n_bricks; ++i) {
			if(bricks[i].CheckBallCollision (ball)) {
				const float new_collision_distance_squared = (ball.GetPosition () - bricks[i].GetCenter ()).GetLengthSq ();
				if(collision_happened) {
					if(new_collision_distance_squared < current_collision_distance_squared) {
						current_collision_distance_squared = new_collision_distance_squared;
						current_collision_index = i;
					}
				} else {
					current_collision_distance_squared = new_collision_distance_squared;
					current_collision_index = i;
					collision_happened = true;
				}
			}
		}

		if(collision_happened) {
			paddle.ResetCooldown ();
			bricks[current_collision_index].ExecuteBallCollision (ball);
			sound_brick.Play ();
		}

		if(paddle.DoBallCollision (ball)) {
			sound_pad.Play ();
		}


		if(ball.DoWallCollisions (walls)) {
			paddle.ResetCooldown ();
			sound_pad.Play ();
		}
	}
}

void Game::ComposeFrame()
{
	if(!game_over) {
		for(const Brick& brick : bricks) {
			brick.Draw (gfx);
		}
		ball.Draw (gfx);
		paddle.Draw (gfx);
	}
}
