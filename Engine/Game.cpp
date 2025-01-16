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
	ball (Vec2 (300.0f, 300.0f), Vec2 (300.0f, 300.0f)),
	walls (0.0f, float (gfx.ScreenWidth), 0.0f, float (gfx.ScreenHeight)),
	sound_pad (L"Sounds\\arkpad.wav"),
	sound_brick(L"Sounds\\arkbrick.wav"),
	paddle(Vec2(400.0f, 500.0f), 50.0f, 15.0f)
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
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	const float dt = ft.Mark ();
	paddle.Update (wnd.kbd, dt);
	paddle.DoWallCollision (walls);
	ball.Update (dt);

	for(Brick& brick : bricks) {
		if(brick.DoBallCollision (ball)) {
			sound_brick.Play ();
			break;
		}
	}

	if(paddle.DoBallCollision (ball)) {
		sound_pad.Play ();
	}


	if(ball.DoWallCollisions (walls)) {
		sound_pad.Play ();
	}
	
}

void Game::ComposeFrame()
{
	for(const Brick& brick : bricks) {
		brick.Draw (gfx);
	}

	ball.Draw (gfx);
	paddle.Draw (gfx);
}
