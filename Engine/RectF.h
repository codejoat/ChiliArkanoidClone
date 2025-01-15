#pragma once

#include "Vec2.h"

class RectF
{
public:
	RectF () = default;
	RectF (float set_left, float set_right, float set_top, float set_bottom);
	RectF (const Vec2& top_left, const Vec2& bottom_right);
	RectF (const Vec2& top_left, float (width), float(height));
	bool IsOverlapping (const RectF& other) const;

public:
	float left;   // refers to top left of x
	float right;  // refers to bottom right of x
	float top;    // refers to top left of y
	float bottom; // refers to bottom right of y
};

