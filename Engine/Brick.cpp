#include "Brick.h"

Brick::Brick (const RectF& set_rect, const Color& set_color)
	:
	rect(set_rect),
	color(set_color)
{
}

void Brick::Draw (Graphics& gfx) const
{
	if(!destroyed) {
		gfx.DrawRect (rect, color);
	}
}

bool Brick::DoBallCollision (Ball& ball)
{
	if(!destroyed && rect.IsOverlappingWith (ball.GetRect ())) {
		ball.ReboundY();
		destroyed = true;
		return true;
	}
	return false;
}
