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
	bool CheckBallCollision (const Ball& ball) const;
	void ExecuteBallCollision (Ball& ball);
	Vec2 GetCenter () const;
	bool GetDestroyed () const;

private:
	static constexpr float padding = 1.5f;
	RectF rect;
	Color color;
	bool destroyed = true;
};

