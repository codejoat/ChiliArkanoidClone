#pragma once

#include "RectF.h"
#include "Colors.h"
#include "Graphics.h"

class Brick
{
public:
	Brick (const RectF& set_rect, const Color& set_color);
	void DrawBrick (Graphics& gfx) const;

private:
	RectF rect;
	Color color;
	bool destroyed = false;
};

