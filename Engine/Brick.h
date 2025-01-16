#pragma once

#include "RectF.h"
#include "Colors.h"
#include "Graphics.h"
#include "Ball.h"

class Brick
{
public:
	Brick () = default;
	Brick (const RectF& set_rect, const Color& set_color);
	void Draw (Graphics& gfx) const;
	bool DoBallCollision (Ball& ball);

private:
	static constexpr float padding = 1.0f;
	RectF rect;
	Color color;
	bool destroyed = false;
};

