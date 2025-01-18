#include "Lives.h"

Lives::Lives (const Vec2& set_position, float set_width, float set_height)
	:
	position(set_position),
	width(set_width),
	height(set_height)
{
}

void Lives::Draw (Graphics& gfx) const
{
		RectF rect = GetRect ();
		gfx.DrawRect (rect, wing_color);
		rect.left += wing_width;
		rect.right -= wing_width;
		gfx.DrawRect (rect, color);
}

RectF Lives::GetRect () const
{
	return RectF (position, width, height);
}
