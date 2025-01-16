#include "RectF.h"

RectF::RectF (float set_left, float set_right, float set_top, float set_bottom)
	:
	left(set_left),
	right(set_right),
	top(set_top),
	bottom(set_bottom)
{
}

RectF::RectF (const Vec2& top_left, const Vec2& bottom_right)
	:
	RectF (top_left.x, bottom_right.x, top_left.y, bottom_right.y)
{
}

RectF::RectF (const Vec2& top_left, float (width), float (height))
	:
	RectF (top_left, top_left + Vec2 (width, height))
{
}

bool RectF::IsOverlappingWith (const RectF& other) const
{
	return
		right > other.left &&
		left < other.right &&
		bottom > other.top &&
		top < other.bottom;
}

RectF RectF::FromCenter (const Vec2& center, float half_width, float half_height)
{
	const Vec2 half (half_width, half_height);
	return RectF (center - half, center + half);
}
