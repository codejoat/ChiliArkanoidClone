#pragma once

#include "Vec2.h"
#include "RectF.h"
#include "Colors.h"
#include "Graphics.h"

class Lives
{
public:
	Lives (const Vec2& set_position, float width, float height);
	void Draw (Graphics& gfx) const;
	RectF GetRect () const;

private:
	static constexpr float wing_width = 7.5f;
	Color wing_color = Color (255, 105, 0);
	Color color = Colors::Gray;
	float width;
	float height;
	Vec2 position;
};


