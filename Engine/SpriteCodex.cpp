// Letter building format // The '?' refers to placement of eact block
/*************************************************************************************************

	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * ?; y < top_left_y + font_size * ?; ++y) {
		for(int x = top_left_x + font_size * ?; x < top_left_x + font_size * ?; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}

*************************************************************************************************/

#include "SpriteCodex.h"

int SpriteCodex::font_size = 0;

void SpriteCodex::DrawBall( const Vec2& topLeft,Graphics& gfx )
{
	const int x = int( topLeft.x ) - 7;
	const int y = int( topLeft.y ) - 7;

	gfx.PutPixel(5 + x, 0 + y, 48, 48, 48);
	gfx.PutPixel(6 + x, 0 + y, 48, 48, 48);
	gfx.PutPixel(7 + x, 0 + y, 48, 48, 48);
	gfx.PutPixel(8 + x, 0 + y, 48, 48, 48);
	gfx.PutPixel(3 + x, 1 + y, 48, 48, 48);
	gfx.PutPixel(4 + x, 1 + y, 48, 48, 48);
	gfx.PutPixel(5 + x, 1 + y, 248, 224, 96);
	gfx.PutPixel(6 + x, 1 + y, 248, 200, 72);
	gfx.PutPixel(7 + x, 1 + y, 200, 168, 72);
	gfx.PutPixel(8 + x, 1 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 1 + y, 48, 48, 48);
	gfx.PutPixel(10 + x, 1 + y, 48, 48, 48);
	gfx.PutPixel(2 + x, 2 + y, 48, 48, 48);
	gfx.PutPixel(3 + x, 2 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 2 + y, 248, 224, 96);
	gfx.PutPixel(5 + x, 2 + y, 248, 224, 96);
	gfx.PutPixel(6 + x, 2 + y, 248, 224, 96);
	gfx.PutPixel(7 + x, 2 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 2 + y, 200, 168, 72);
	gfx.PutPixel(9 + x, 2 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 2 + y, 248, 200, 72);
	gfx.PutPixel(11 + x, 2 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 3 + y, 48, 48, 48);
	gfx.PutPixel(2 + x, 3 + y, 248, 224, 96);
	gfx.PutPixel(3 + x, 3 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 3 + y, 248, 248, 248);
	gfx.PutPixel(5 + x, 3 + y, 248, 248, 248);
	gfx.PutPixel(6 + x, 3 + y, 248, 224, 96);
	gfx.PutPixel(7 + x, 3 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 3 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 3 + y, 152, 112, 16);
	gfx.PutPixel(10 + x, 3 + y, 200, 168, 72);
	gfx.PutPixel(11 + x, 3 + y, 200, 168, 72);
	gfx.PutPixel(12 + x, 3 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 4 + y, 48, 48, 48);
	gfx.PutPixel(2 + x, 4 + y, 248, 224, 96);
	gfx.PutPixel(3 + x, 4 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 4 + y, 248, 248, 248);
	gfx.PutPixel(5 + x, 4 + y, 248, 248, 248);
	gfx.PutPixel(6 + x, 4 + y, 248, 224, 96);
	gfx.PutPixel(7 + x, 4 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 4 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 4 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 4 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 4 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 4 + y, 48, 48, 48);
	gfx.PutPixel(0 + x, 5 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 5 + y, 248, 200, 72);
	gfx.PutPixel(2 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(3 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(5 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(6 + x, 5 + y, 248, 224, 96);
	gfx.PutPixel(7 + x, 5 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 5 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 5 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 5 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 5 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 5 + y, 200, 168, 72);
	gfx.PutPixel(13 + x, 5 + y, 48, 48, 48);
	gfx.PutPixel(0 + x, 6 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(2 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(3 + x, 6 + y, 248, 224, 96);
	gfx.PutPixel(4 + x, 6 + y, 248, 224, 96);
	gfx.PutPixel(5 + x, 6 + y, 248, 224, 96);
	gfx.PutPixel(6 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(7 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 6 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 6 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 6 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 6 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 6 + y, 152, 112, 16);
	gfx.PutPixel(13 + x, 6 + y, 48, 48, 48);
	gfx.PutPixel(0 + x, 7 + y, 48, 48, 48);
	gfx.PutPixel(1 + x, 7 + y, 200, 168, 72);
	gfx.PutPixel(2 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(3 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(4 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(5 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(6 + x, 7 + y, 248, 248, 248);
	gfx.PutPixel(7 + x, 7 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 7 + y, 200, 168, 72);
	gfx.PutPixel(9 + x, 7 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 7 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 7 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 7 + y, 152, 112, 16);
	gfx.PutPixel(13 + x, 7 + y, 48, 48, 48);
	gfx.PutPixel(0 + x, 8 + y, 128, 88, 0);
	gfx.PutPixel(1 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(2 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(3 + x, 8 + y, 248, 200, 72);
	gfx.PutPixel(4 + x, 8 + y, 248, 200, 72);
	gfx.PutPixel(5 + x, 8 + y, 248, 200, 72);
	gfx.PutPixel(6 + x, 8 + y, 248, 200, 72);
	gfx.PutPixel(7 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(8 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(9 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 8 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 8 + y, 152, 112, 16);
	gfx.PutPixel(12 + x, 8 + y, 200, 168, 72);
	gfx.PutPixel(13 + x, 8 + y, 128, 88, 0);
	gfx.PutPixel(1 + x, 9 + y, 152, 112, 16);
	gfx.PutPixel(2 + x, 9 + y, 152, 112, 16);
	gfx.PutPixel(3 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(4 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(5 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(6 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(7 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(8 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(9 + x, 9 + y, 152, 112, 16);
	gfx.PutPixel(10 + x, 9 + y, 152, 112, 16);
	gfx.PutPixel(11 + x, 9 + y, 200, 168, 72);
	gfx.PutPixel(12 + x, 9 + y, 192, 152, 56);
	gfx.PutPixel(1 + x, 10 + y, 128, 88, 0);
	gfx.PutPixel(2 + x, 10 + y, 248, 200, 72);
	gfx.PutPixel(3 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(4 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(5 + x, 10 + y, 200, 168, 72);
	gfx.PutPixel(6 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(7 + x, 10 + y, 200, 168, 72);
	gfx.PutPixel(8 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(9 + x, 10 + y, 152, 112, 16);
	gfx.PutPixel(10 + x, 10 + y, 200, 168, 72);
	gfx.PutPixel(11 + x, 10 + y, 248, 200, 72);
	gfx.PutPixel(12 + x, 10 + y, 128, 88, 0);
	gfx.PutPixel(2 + x, 11 + y, 48, 48, 48);
	gfx.PutPixel(3 + x, 11 + y, 248, 200, 72);
	gfx.PutPixel(4 + x, 11 + y, 200, 168, 72);
	gfx.PutPixel(5 + x, 11 + y, 152, 112, 16);
	gfx.PutPixel(6 + x, 11 + y, 152, 112, 16);
	gfx.PutPixel(7 + x, 11 + y, 152, 112, 16);
	gfx.PutPixel(8 + x, 11 + y, 152, 112, 16);
	gfx.PutPixel(9 + x, 11 + y, 200, 168, 72);
	gfx.PutPixel(10 + x, 11 + y, 248, 200, 72);
	gfx.PutPixel(11 + x, 11 + y, 48, 48, 48);
	gfx.PutPixel(3 + x, 12 + y, 48, 48, 48);
	gfx.PutPixel(4 + x, 12 + y, 152, 112, 16);
	gfx.PutPixel(5 + x, 12 + y, 248, 200, 72);
	gfx.PutPixel(6 + x, 12 + y, 248, 200, 72);
	gfx.PutPixel(7 + x, 12 + y, 248, 200, 72);
	gfx.PutPixel(8 + x, 12 + y, 248, 200, 72);
	gfx.PutPixel(9 + x, 12 + y, 152, 112, 16);
	gfx.PutPixel(10 + x, 12 + y, 48, 48, 48);
	gfx.PutPixel(5 + x, 13 + y, 48, 48, 48);
	gfx.PutPixel(6 + x, 13 + y, 48, 48, 48);
	gfx.PutPixel(7 + x, 13 + y, 48, 48, 48);
	gfx.PutPixel(8 + x, 13 + y, 48, 48, 48);	
}

void SpriteCodex::Draw_A (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);
	
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_B (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_C (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_D (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_E (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_F (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_G (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_H (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_I (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_J (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_K (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_L (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_M (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 4; x < top_left_x + font_size * 5; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_N (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_O (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_P (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_Q (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_R (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_S (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_T (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_U (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_V (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);


	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 4; x < top_left_x + font_size * 5; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_W (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 4; x < top_left_x + font_size * 5; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_X (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_Y (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 4; x < top_left_x + font_size * 5; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_Z (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_0 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	// Special 0 case to differentiate from O
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_1 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_2 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 2 ; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_3 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_4 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 2; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_5 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_6 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_7 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_8 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 3; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_9 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 2; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 1; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 2; y < top_left_y + font_size * 3; ++y) {
		for(int x = top_left_x + font_size * 1; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 4; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 2; x < top_left_x + font_size * 3; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
	for(int y = top_left_y + font_size * 1; y < top_left_y + font_size * 4; ++y) {
		for(int x = top_left_x + font_size * 3; x < top_left_x + font_size * 4; ++x) {
			gfx.PutPixel (x, y, c);
		}
	}
}

void SpriteCodex::Draw_Short_Space (const Vec2& top_left, Graphics& gfx, int size_mod, Color c, bool block)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 1; ++x) {
			if(block) {
				gfx.PutPixel (x, y, c);
			}		
		}
	}
}

void SpriteCodex::Draw_Full_Space (const Vec2& top_left, Graphics& gfx, int size_mod, Color c, bool block)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 5; ++y) {
		for(int x = top_left_x + font_size * 0; x < top_left_x + font_size * 4; ++x) {
			if(block) {
				gfx.PutPixel (x, y, c);
			}
		}
	}
}

