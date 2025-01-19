#pragma once

#include "Ball.h"
#include "Vec2.h"
#include "RectF.h"
#include "Colors.h"
#include "Graphics.h"
#include "Keyboard.h"

class Paddle
{
public:
	Paddle (const Vec2& set_position, float set_half_width, float set_half_height);
	void Draw (Graphics& gfx) const;
	bool DoBallCollision (Ball& ball);
	void DoWallCollision (const RectF& walls);
	void Update (const Keyboard& kbd, float dt);
	RectF GetRect () const;
	void ResetCooldown ();

private:
	static constexpr float wing_width = 15.0f;
	Color wing_color = Color (255, 105, 0);
	Color color = Colors::Gray;
	float speed = 500.0f;
	float half_width;
	float half_height;
	Vec2 position;
	bool is_cooldown = false;
};

