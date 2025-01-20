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

private:
	SpriteCodex ch;
	static constexpr float width = 4.0f;
	static constexpr float height = 5.0f;
	static constexpr float wide_width = 5.0f;
	static constexpr float narrow_width = 3.0f;
};

