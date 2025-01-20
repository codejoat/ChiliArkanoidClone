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

void MessageSprites::DrawScore (Graphics& gfx) const
{
	ch.Draw_S (Vec2 (177.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_C (Vec2 (197.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_O (Vec2 (217.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_R (Vec2 (237.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_E (Vec2 (257.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_Colon (Vec2 (277.0f, 33.0f), gfx, 2, Color (200, 0, 50));

	// Mock-up of score, TODO create function
	// ch.Draw_1 (Vec2 (301.0f, 33.0f), gfx, 2, Color (200, 200, 200));
	// ch.Draw_0 (Vec2 (321.0f, 33.0f), gfx, 2, Color (200, 200, 200));
	// ch.Draw_0 (Vec2 (341.0f, 33.0f), gfx, 2, Color (200, 200, 200));
	// ch.Draw_6 (Vec2 (361.0f, 33.0f), gfx, 2, Color (200, 200, 200));
	// ch.Draw_2 (Vec2 (381.0f, 33.0f), gfx, 2, Color (200, 200, 200));
	// ch.Draw_5 (Vec2 (401.0f, 33.0f), gfx, 2, Color (200, 200, 200));
}
