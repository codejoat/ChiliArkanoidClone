#pragma once

#include "Vec2.h"
#include "Graphics.h"
#include "SpriteCodex.h"
#include "RectF.h"

class Ball
{
public:
	Ball () = default;
	Ball (const Vec2& set_position, const Vec2& set_velocity);
	void Draw (Graphics& gfx) const;
	void Update (float dt);
	bool DoWallCollisions (const RectF& walls);
	void ReboundX ();
	void ReboundY (int way);
	RectF GetRect () const;
	Vec2 GetVelocity () const;
	Vec2 GetPosition () const;
	bool CheckBottomCollision () const;
	void RidePaddle (const Vec2& set_position);
	void StartBall ();
	void ZeroVelocity ();

private:
	static constexpr float radius = 7.0f;
	Vec2 position;
	Vec2 velocity;
	bool bottom_collision = false;
};

