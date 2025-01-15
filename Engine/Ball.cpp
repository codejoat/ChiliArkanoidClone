#include "Ball.h"

Ball::Ball (const Vec2& set_position, const Vec2& set_velocity)
	:
	position(set_position),
	velocity(set_velocity)
{
}

void Ball::Draw (Graphics& gfx) const
{
	SpriteCodex::DrawBall (position, gfx);
}

void Ball::Update (float dt)
{
	position = velocity * dt;
}

bool Ball::WallCollisions (RectF walls)
{
	return false;
}
