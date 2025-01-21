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

void MessageSprites::Draw1Up (Graphics& gfx) const
{
	ch.Draw_1 (Vec2 (565.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_U (Vec2 (585.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_P (Vec2 (605.0f, 33.0f), gfx, 2, Color (200, 0, 50));
}

void MessageSprites::DrawScore (Graphics& gfx, const int score) const
{
	ch.Draw_S (Vec2 (177.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_C (Vec2 (197.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_O (Vec2 (217.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_R (Vec2 (237.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_E (Vec2 (257.0f, 33.0f), gfx, 2, Color (200, 0, 50));
	ch.Draw_Colon (Vec2 (277.0f, 33.0f), gfx, 2, Color (200, 0, 50));

	int number_container[4] = { 0 };
	int score_digits = score;
	int last_digit = 0;
	
	int counter = 3;
	while(score_digits > 0) {
		
		last_digit = score_digits % 10;
		number_container[counter] = last_digit;
		--counter;
		score_digits /= 10;
	}

	if(score < 10) {
		
		ConvertNumbersToSprites (gfx, left_digit, number_container[3]);
	} else if(score < 100) {

		for(int i = 0; i < 2; ++i) {
			ConvertNumbersToSprites (gfx, left_digit + (digit_displacement * i), number_container[i + 2]);
		}	
	} else if(score < 1000) {
		
		for(int i = 0; i < 3; ++i) {
			ConvertNumbersToSprites (gfx, left_digit + (digit_displacement * i), number_container[i + 1]);
		}
	} else if(score < 10000) {
		
		for(int i = 0; i < 4; ++i) {
			ConvertNumbersToSprites (gfx, left_digit + (digit_displacement * i), number_container[i]);
		}
	}
}

void MessageSprites::ConvertNumbersToSprites (Graphics& gfx, const float x_position, const int number) const
{
	switch(number) {
	case 0:
		ch.Draw_0 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	case 1:
		ch.Draw_1 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	case 2:
		ch.Draw_2 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	case 3:
		ch.Draw_3 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	case 4:
		ch.Draw_4 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	case 5:
		ch.Draw_5 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	case 6:
		ch.Draw_6 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	case 7:
		ch.Draw_7 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	case 8:
		ch.Draw_8 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	case 9:
		ch.Draw_9 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
		break;
	default:
		ch.Draw_0 (Vec2 (x_position, 33.0f), gfx, 2, Color (200, 200, 200));
	}
}
