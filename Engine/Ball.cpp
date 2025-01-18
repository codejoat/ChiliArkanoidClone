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
	position += velocity * dt;
}

bool Ball::DoWallCollisions (const RectF& walls)
{
	bool collided = false;
	const RectF rect = GetRect ();
	if(rect.left < walls.left) {
		position.x += walls.left - rect.left;
		ReboundX ();
		collided = true;
	} else if(rect.right > walls.right) {
		position.x -= rect.right - walls.right;
		ReboundX ();
		collided = true;
	}

	if(rect.top < walls.top) {
		position.y += walls.top - rect.top;
		ReboundY (0);
		collided = true;
	} else if(rect.bottom > walls.bottom) {
		position.y -= rect.bottom - walls.bottom;
		bottom_collision = true;
	}
	return collided;
}

void Ball::ReboundX ()
{
	velocity.x = -velocity.x;
}

void Ball::ReboundY (int way)
{
	velocity.y = -velocity.y;
	if(way == 2 && velocity.x < 0.0f) {
		ReboundX ();
	} else if(way == 1 && velocity.x > 0.0f) {
		ReboundX ();
	}
}

RectF Ball::GetRect () const
{
	return RectF::FromCenter (position, radius, radius);
}

Vec2 Ball::GetVelocity () const
{
	return velocity;
}

Vec2 Ball::GetPosition () const
{
	return position;
}

bool Ball::CheckBottomCollision () const
{
	return bottom_collision;
}

void Ball::RidePaddle (const Vec2& set_position)
{
	position = set_position;
}

void Ball::StartBall ()
{
	bottom_collision = false;
	velocity = Vec2 (100.0f, 100.0f);
}

void Ball::ZeroVelocity ()
{
	velocity = Vec2 (0.0f, 0.0f);
}
