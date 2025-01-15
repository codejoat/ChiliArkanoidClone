#include "Brick.h"

Brick::Brick (const RectF& set_rect, const Color& set_color)
	:
	rect(set_rect),
	color(set_color)
{
}

void Brick::DrawBrick (Graphics& gfx) const
{
	gfx.DrawRect (rect, color);
}
