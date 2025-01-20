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
	ch.Draw_P (Vec2 (198.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_R (Vec2 (235.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_E (Vec2 (272.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_S (Vec2 (309.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_S (Vec2 (347.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	
	ch.Draw_Full_Space (Vec2 (275.0f, 280.0f), gfx, 4, Colors::Gray, false);
	
	ch.Draw_E (Vec2 (419.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_N (Vec2 (456.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_T (Vec2 (493.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_E (Vec2 (522.0f, 280.0f), gfx, 4, Color (0, 200, 50));
	ch.Draw_R (Vec2 (559.0f, 280.0f), gfx, 4, Color (0, 200, 50));
}
