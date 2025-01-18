#include "Brick.h"
#include <assert.h>
#include <cmath>

Brick::Brick (const RectF& set_rect, const Color& set_color)
	:
	rect (set_rect),
	color (set_color),
	destroyed (false)
{
}

void Brick::Draw (Graphics& gfx) const
{
	if(!destroyed) {
		gfx.DrawRect (rect.GetExpanded( -padding), color);
	}
}

bool Brick::CheckBallCollision (const Ball& ball) const
{
	return !destroyed && rect.IsOverlappingWith (ball.GetRect ());
}

void Brick::ExecuteBallCollision (Ball& ball)
{
	assert (CheckBallCollision (ball));
	const Vec2 ball_position = ball.GetPosition ();
	if(std::signbit (ball.GetVelocity ().x) == std::signbit ((ball_position - GetCenter ()).x)) {
		ball.ReboundY (0);
	} else if(ball_position.x >= rect.left && ball_position.x <= rect.right) {
		ball.ReboundY (0);
	} else {
		ball.ReboundX ();
	}
	destroyed = true;
}

Vec2 Brick::GetCenter () const
{
	return rect.GetCenter();
}
