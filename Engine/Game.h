/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
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
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "FrameTimer.h"
#include "Ball.h"
#include "Sound.h"
#include "Brick.h"
#include "Paddle.h"
#include "Lives.h"
#include "SpriteCodex.h"
#include "MessageSprites.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel(float dt);
	/********************************/
	/*  User Functions              */
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	static constexpr float brick_width = 32.0f;
	static constexpr float brick_height = 18.0f;
	static constexpr int n_bricks_across = 13;
	static constexpr int n_bricks_down = 6;
	static constexpr int n_bricks = n_bricks_across * n_bricks_down;
	static constexpr int max_lives = 10;
	static constexpr float paddle_width = 35.0f;
	static constexpr float paddle_height = 7.5f;
	FrameTimer ft;
	Paddle paddle;
	Ball ball;
	MessageSprites msg;
	SpriteCodex pipe;
	int lives_remaining = 3;
	int points = 0;
	Lives lives[max_lives];
	Brick bricks[n_bricks];
	Brick wall_bricks;
	RectF walls;
	Sound sound_pad;
	Sound sound_brick;
	bool game_over = false;
	bool game_begin = false;
	bool game_started = false;
	/********************************/
};