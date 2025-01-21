#pragma once

#include "SpriteCodex.h"
#include "Graphics.h"
#include "Colors.h"
#include "Vec2.h"

class MessageSprites
{
public:
	void DrawGameOver (Graphics& gfx) const;
	void DrawPressEnter (Graphics& gfx) const;
	void DrawScore (Graphics& gfx, const int score) const;
	void ConvertNumbersToSprites (Graphics& gfx, const float x_position, const int number) const;
	void Draw1Up (Graphics& gfx) const;

private:
	SpriteCodex ch;
	static constexpr float left_digit = 301.0f;
	static constexpr float digit_displacement = 20.0f;
};

