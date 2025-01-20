#include "MessageSprites.h"

void MessageSprites::DrawGameOver (Graphics& gfx) const
{
	ch.Draw_G (Vec2 (235.0f, 280.0f), gfx, 4, Color(200, 0, 50));
	ch.Draw_A (Vec2 (272.0f, 280.0f), gfx, 4, Color (200, 0, 50));
	ch.Draw_M (Vec2 (309.0f, 280.0f), gfx, 4, Color (200, 0, 50));
	ch.Draw_E (Vec2 (354.0f, 280.0f), gfx, 4, Color (200, 0, 50));
	
	ch.Draw_Full_Space (Vec2 (275.0f, 280.0f), gfx, 4, Colors::Gray, false);
	
	ch.Draw_O (Vec2 (415.0f, 280.0f), gfx, 4, Color (200, 0, 50));
	ch.Draw_V (Vec2 (455.0f, 280.0f), gfx, 4, Color (200, 0, 50));
	ch.Draw_E (Vec2 (500.0f, 280.0f), gfx, 4, Color (200, 0, 50));
	ch.Draw_R (Vec2 (538.0f, 280.0f), gfx, 4, Color (200, 0, 50));
}

void MessageSprites::DrawPressEnter (Graphics& gfx) const
{
	ch.Draw_P (Vec2 (203.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_R (Vec2 (240.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_E (Vec2 (277.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_S (Vec2 (314.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_S (Vec2 (352.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	
	ch.Draw_Full_Space (Vec2 (280.0f, 280.0f), gfx, 4, Colors::Gray, false);
	
	ch.Draw_E (Vec2 (424.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_N (Vec2 (461.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_T (Vec2 (498.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_E (Vec2 (527.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_R (Vec2 (564.0f, 280.0f), gfx, 4, Color (0, 200, 50));
}
