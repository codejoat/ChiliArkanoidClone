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
	void DrawScore (Graphics& gfx) const;

private:
	SpriteCodex ch;
};

