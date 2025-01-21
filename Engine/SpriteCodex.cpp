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
	gfx.PutPixel(12 + x, 9 + y, 102, 152, 56);
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

void SpriteCodex::DrawWallPipe (const Vec2& top_left, Graphics& gfx)
{
	const int x = int (top_left.x);
	const int y = int (top_left.y);

	gfx.PutPixel (x + 2 , y + 0 , 0, 0, 0);
	gfx.PutPixel (x + 3 , y + 0 , 0, 0, 0);
	gfx.PutPixel (x + 4 , y + 0 , 0, 0, 0);
	gfx.PutPixel (x + 5 , y + 0 , 0, 0, 0);
	gfx.PutPixel (x + 6 , y + 0 , 0, 0, 0);
	gfx.PutPixel (x + 7 , y + 0 , 0, 0, 0);
	gfx.PutPixel (x + 8 , y + 0 , 0, 0, 0);
	gfx.PutPixel (x + 9 , y + 0 , 0, 0, 0);
	gfx.PutPixel (x + 10, y + 0 , 0, 0, 0);

	gfx.PutPixel (x + 1, y  + 1 , 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 1 , 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 1 , 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 1 , 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 1 , 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 1 , 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 1 , 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 1 , 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 1 , 102, 102, 102);
	gfx.PutPixel (x + 10, y + 1 , 0, 0, 0);
	gfx.PutPixel (x + 11, y + 1 , 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 2 , 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 2 , 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 2 , 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 2 , 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 2 , 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 2 , 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 2 , 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 2 , 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 2 , 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 2 , 102, 102, 102);
	gfx.PutPixel (x + 10, y + 2 , 255, 255, 255);
	gfx.PutPixel (x + 11, y + 2 , 0, 0, 0);
	gfx.PutPixel (x + 12, y + 2 , 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 3 , 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 3 , 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 3 , 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 3 , 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 3 , 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 3 , 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 3 , 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 3 , 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 3 , 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 3 , 102, 102, 102);
	gfx.PutPixel (x + 10, y + 3 , 102, 102, 102);
	gfx.PutPixel (x + 11, y + 3 , 255, 255, 255);
	gfx.PutPixel (x + 12, y + 3 , 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 4 , 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 4 , 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 4 , 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 4 , 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 4 , 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 4 , 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 4 , 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 4 , 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 4 , 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 4 , 102, 102, 102);
	gfx.PutPixel (x + 10, y + 4 , 102, 102, 102);
	gfx.PutPixel (x + 11, y + 4 , 255, 255, 255);
	gfx.PutPixel (x + 12, y + 4 , 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 5 , 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 5 , 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 5 , 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 5 , 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 5 , 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 5 , 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 5 , 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 5 , 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 5 , 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 5 , 102, 102, 102);
	gfx.PutPixel (x + 10, y + 5 , 102, 102, 102);
	gfx.PutPixel (x + 11, y + 5 , 255, 255, 255);
	gfx.PutPixel (x + 12, y + 5 , 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 6 , 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 6 , 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 6 , 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 6 , 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 6 , 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 6 , 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 6 , 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 6 , 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 6 , 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 6 , 102, 102, 102);
	gfx.PutPixel (x + 10, y + 6 , 102, 102, 102);
	gfx.PutPixel (x + 11, y + 6 , 255, 255, 255);
	gfx.PutPixel (x + 12, y + 6 , 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 7 , 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 7 , 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 7 , 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 7 , 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 7 , 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 7 , 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 7 , 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 7 , 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 7 , 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 7 , 102, 102, 102);
	gfx.PutPixel (x + 10, y + 7 , 102, 102, 102);
	gfx.PutPixel (x + 11, y + 7 , 255, 255, 255);
	gfx.PutPixel (x + 12, y + 7 , 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 8 , 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 8 , 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 8 , 102, 102, 102);
	gfx.PutPixel (x + 3, y  + 8 , 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 8 , 0, 0, 0);
	gfx.PutPixel (x + 5, y  + 8 , 0, 0, 0);
	gfx.PutPixel (x + 6, y  + 8 , 0, 0, 0);
	gfx.PutPixel (x + 7, y  + 8 , 0, 0, 0);
	gfx.PutPixel (x + 8, y  + 8 , 0, 0, 0);
	gfx.PutPixel (x + 9, y  + 8 , 0, 0, 0);
	gfx.PutPixel (x + 10, y + 8 , 102, 102, 102);
	gfx.PutPixel (x + 11, y + 8 , 0, 0, 0);
	gfx.PutPixel (x + 12, y + 8 , 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 9 , 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 9 , 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 9 , 102, 102, 102);
	gfx.PutPixel (x + 3, y  + 9 , 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 9 , 0, 0, 0);
	gfx.PutPixel (x + 5, y  + 9 , 0, 0, 0);
	gfx.PutPixel (x + 6, y  + 9 , 0, 0, 0);
	gfx.PutPixel (x + 7, y  + 9 , 0, 0, 0);
	gfx.PutPixel (x + 8, y  + 9 , 0, 0, 0);
	gfx.PutPixel (x + 9, y  + 9 , 0, 0, 0);
	gfx.PutPixel (x + 10, y + 9 , 102, 102, 102);
	gfx.PutPixel (x + 11, y + 9 , 0, 0, 0);
	gfx.PutPixel (x + 12, y + 9 , 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 10, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 10, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 10, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 10, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 10, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 10, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 10, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 10, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 10, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 10, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 10, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 10, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 11, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 11, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 11, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 11, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 11, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 11, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 11, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 11, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 11, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 11, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 11, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 11, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 12, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 12, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 12, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 12, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 12, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 12, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 12, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 12, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 12, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 12, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 12, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 12, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 12, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 13, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 13, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 13, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 13, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 13, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 13, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 13, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 13, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 13, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 13, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 13, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 13, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 13, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 14, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 14, 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 14, 102, 102, 102);
	gfx.PutPixel (x + 3, y  + 14, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 14, 0, 0, 0);
	gfx.PutPixel (x + 5, y  + 14, 0, 0, 0);
	gfx.PutPixel (x + 6, y  + 14, 0, 0, 0);
	gfx.PutPixel (x + 7, y  + 14, 0, 0, 0);
	gfx.PutPixel (x + 8, y  + 14, 0, 0, 0);
	gfx.PutPixel (x + 9, y  + 14, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 14, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 14, 0, 0, 0);
	gfx.PutPixel (x + 12, y + 14, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 15, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 15, 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 15, 102, 102, 102);
	gfx.PutPixel (x + 3, y  + 15, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 15, 0, 0, 0);
	gfx.PutPixel (x + 5, y  + 15, 0, 0, 0);
	gfx.PutPixel (x + 6, y  + 15, 0, 0, 0);
	gfx.PutPixel (x + 7, y  + 15, 0, 0, 0);
	gfx.PutPixel (x + 8, y  + 15, 0, 0, 0);
	gfx.PutPixel (x + 9, y  + 15, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 15, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 15, 0, 0, 0);
	gfx.PutPixel (x + 12, y + 15, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 16, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 16, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 16, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 16, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 16, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 16, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 16, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 16, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 16, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 16, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 16, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 16, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 16, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 17, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 17, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 17, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 17, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 17, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 17, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 17, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 17, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 17, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 17, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 17, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 17, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 17, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 18, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 18, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 18, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 18, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 18, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 18, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 18, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 18, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 18, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 18, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 18, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 18, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 18, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 19, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 19, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 19, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 19, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 19, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 19, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 19, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 19, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 19, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 19, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 19, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 19, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 19, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 20, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 20, 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 20, 102, 102, 102);
	gfx.PutPixel (x + 3, y  + 20, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 20, 0, 0, 0);
	gfx.PutPixel (x + 5, y  + 20, 0, 0, 0);
	gfx.PutPixel (x + 6, y  + 20, 0, 0, 0);
	gfx.PutPixel (x + 7, y  + 20, 0, 0, 0);
	gfx.PutPixel (x + 8, y  + 20, 0, 0, 0);
	gfx.PutPixel (x + 9, y  + 20, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 20, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 20, 0, 0, 0);
	gfx.PutPixel (x + 12, y + 20, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 21, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 21, 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 21, 102, 102, 102);
	gfx.PutPixel (x + 3, y  + 21, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 21, 0, 0, 0);
	gfx.PutPixel (x + 5, y  + 21, 0, 0, 0);
	gfx.PutPixel (x + 6, y  + 21, 0, 0, 0);
	gfx.PutPixel (x + 7, y  + 21, 0, 0, 0);
	gfx.PutPixel (x + 8, y  + 21, 0, 0, 0);
	gfx.PutPixel (x + 9, y  + 21, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 21, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 21, 0, 0, 0);
	gfx.PutPixel (x + 12, y + 21, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 22, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 22, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 22, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 22, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 22, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 22, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 22, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 22, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 22, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 22, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 22, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 22, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 22, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 23, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 23, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 23, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 23, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 23, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 23, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 23, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 23, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 23, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 23, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 23, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 23, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 23, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 24, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 24, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 24, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 24, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 24, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 24, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 24, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 24, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 24, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 24, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 24, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 24, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 24, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 25, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 25, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 25, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 25, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 25, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 25, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 25, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 25, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 25, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 25, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 25, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 25, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 25, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 26, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 26, 102, 102, 102);
	gfx.PutPixel (x + 2, y  + 26, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 26, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 26, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 26, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 26, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 26, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 26, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 26, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 26, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 26, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 26, 0, 0, 0);

	gfx.PutPixel (x + 0, y  + 27, 0, 0, 0);
	gfx.PutPixel (x + 1, y  + 27, 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 27, 255, 255, 255);
	gfx.PutPixel (x + 3, y  + 27, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 27, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 27, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 27, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 27, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 27, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 27, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 27, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 27, 0, 0, 0);
	gfx.PutPixel (x + 12, y + 27, 0, 0, 0);

	gfx.PutPixel (x + 1, y  + 28, 0, 0, 0);
	gfx.PutPixel (x + 2, y  + 28, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 28, 255, 255, 255);
	gfx.PutPixel (x + 4, y  + 28, 102, 102, 102);
	gfx.PutPixel (x + 5, y  + 28, 102, 102, 102);
	gfx.PutPixel (x + 6, y  + 28, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 28, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 28, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 28, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 28, 0, 0, 0);
	gfx.PutPixel (x + 11, y + 28, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 29, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 29, 0, 0, 0);
	gfx.PutPixel (x + 4, y  + 29, 0, 0, 0);
	gfx.PutPixel (x + 5, y  + 29, 0, 0, 0);
	gfx.PutPixel (x + 6, y  + 29, 0, 0, 0);
	gfx.PutPixel (x + 7, y  + 29, 0, 0, 0);
	gfx.PutPixel (x + 8, y  + 29, 0, 0, 0);
	gfx.PutPixel (x + 9, y  + 29, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 29, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 30, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 30, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 30, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 30, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 30, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 30, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 30, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 30, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 30, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 31, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 31, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 31, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 31, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 31, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 31, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 31, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 31, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 31, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 32, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 32, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 32, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 32, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 32, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 32, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 32, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 32, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 32, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 33, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 33, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 33, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 33, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 33, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 33, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 33, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 33, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 33, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 34, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 34, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 34, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 34, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 34, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 34, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 34, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 34, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 34, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 35, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 35, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 35, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 35, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 35, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 35, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 35, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 35, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 35, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 36, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 36, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 36, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 36, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 36, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 36, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 36, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 36, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 36, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 37, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 37, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 37, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 37, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 37, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 37, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 37, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 37, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 37, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 38, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 38, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 38, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 38, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 38, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 38, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 38, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 38, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 38, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 39, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 39, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 39, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 39, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 39, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 39, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 39, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 39, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 39, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 40, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 40, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 40, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 40, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 40, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 40, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 40, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 40, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 40, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 41, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 41, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 41, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 41, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 41, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 41, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 41, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 41, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 41, 0, 0, 0);

	gfx.PutPixel (x + 2, y  + 42, 0, 0, 0);
	gfx.PutPixel (x + 3, y  + 42, 102, 102, 102);
	gfx.PutPixel (x + 4, y  + 42, 255, 255, 255);
	gfx.PutPixel (x + 5, y  + 42, 255, 255, 255);
	gfx.PutPixel (x + 6, y  + 42, 102, 102, 102);
	gfx.PutPixel (x + 7, y  + 42, 102, 102, 102);
	gfx.PutPixel (x + 8, y  + 42, 102, 102, 102);
	gfx.PutPixel (x + 9, y  + 42, 255, 255, 255);
	gfx.PutPixel (x + 10, y + 42, 0, 0, 0);

	gfx.PutPixel (x + 2, y + 43, 0, 0, 0);
	gfx.PutPixel (x + 3, y + 43, 102, 102, 102);
	gfx.PutPixel (x + 4, y + 43, 255, 255, 255);
	gfx.PutPixel (x + 5, y + 43, 255, 255, 255);
	gfx.PutPixel (x + 6, y + 43, 102, 102, 102);
	gfx.PutPixel (x + 7, y + 43, 102, 102, 102);
	gfx.PutPixel (x + 8, y + 43, 102, 102, 102);
	gfx.PutPixel (x + 9, y + 43, 255, 255, 255);
	gfx.PutPixel (x + 10,y + 43, 0, 0, 0);
}

void SpriteCodex::DrawLeftCorner (const Vec2& top_left, Graphics& gfx)
{
	const int x = int (top_left.x);
	const int y = int (top_left.y);
	
	gfx.PutPixel (x + 6,  y - 14, 0, 0, 0);
	gfx.PutPixel (x + 7,  y - 14, 0, 0, 0);
	gfx.PutPixel (x + 8,  y - 14, 0, 0, 0);
	gfx.PutPixel (x + 9,  y - 14, 0, 0, 0);
	gfx.PutPixel (x + 10, y - 14, 0, 0, 0);
	gfx.PutPixel (x + 11, y - 14, 0, 0, 0);
	gfx.PutPixel (x + 12, y - 14, 0, 0, 0);
	gfx.PutPixel (x + 13, y - 14, 0, 0, 0);
	gfx.PutPixel (x + 14, y - 14, 0, 0, 0);
	gfx.PutPixel (x + 15, y - 14, 0, 0, 0);
	gfx.PutPixel (x + 16, y - 14, 0, 0, 0);

	gfx.PutPixel (x + 4,  y - 13, 0, 0, 0);
	gfx.PutPixel (x + 5,  y - 13, 0, 0, 0);
	gfx.PutPixel (x + 6,  y - 13, 0, 0, 0);
	gfx.PutPixel (x + 7,  y - 13, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 13, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 13, 102, 102, 102);
	gfx.PutPixel (x + 10, y - 13, 102, 102, 102);
	gfx.PutPixel (x + 11, y - 13, 102, 102, 102);
	gfx.PutPixel (x + 12, y - 13, 102, 102, 102);
	gfx.PutPixel (x + 13, y - 13, 102, 102, 102);
	gfx.PutPixel (x + 14, y - 13, 102, 102, 102);
	gfx.PutPixel (x + 15, y - 13, 102, 102, 102);
	gfx.PutPixel (x + 16, y - 13, 102, 102, 102);

	gfx.PutPixel (x + 3,  y - 12, 0, 0, 0);
	gfx.PutPixel (x + 4,  y - 12, 0, 0, 0);
	gfx.PutPixel (x + 5,  y - 12, 102, 102, 102);
	gfx.PutPixel (x + 6,  y - 12, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 12, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 12, 255, 255, 255);
	gfx.PutPixel (x + 9,  y - 12, 255, 255, 255);
	gfx.PutPixel (x + 10, y - 12, 255, 255, 255);
	gfx.PutPixel (x + 11, y - 12, 255, 255, 255);
	gfx.PutPixel (x + 12, y - 12, 255, 255, 255);
	gfx.PutPixel (x + 13, y - 12, 255, 255, 255);
	gfx.PutPixel (x + 14, y - 12, 255, 255, 255);
	gfx.PutPixel (x + 15, y - 12, 255, 255, 255);
	gfx.PutPixel (x + 16, y - 12, 255, 255, 255);

	gfx.PutPixel (x + 3,  y - 11, 0, 0, 0);
	gfx.PutPixel (x + 4,  y - 11, 102, 102, 102);
	gfx.PutPixel (x + 5,  y - 11, 102, 102, 102);
	gfx.PutPixel (x + 6,  y - 11, 255, 255, 255);
	gfx.PutPixel (x + 7,  y - 11, 255, 255, 255);
	gfx.PutPixel (x + 8,  y - 11, 255, 255, 255);
	gfx.PutPixel (x + 9,  y - 11, 255, 255, 255);
	gfx.PutPixel (x + 10, y - 11, 255, 255, 255);
	gfx.PutPixel (x + 11, y - 11, 255, 255, 255);
	gfx.PutPixel (x + 12, y - 11, 255, 255, 255);
	gfx.PutPixel (x + 13, y - 11, 255, 255, 255);
	gfx.PutPixel (x + 14, y - 11, 255, 255, 255);
	gfx.PutPixel (x + 15, y - 11, 255, 255, 255);
	gfx.PutPixel (x + 16, y - 11, 255, 255, 255);

	gfx.PutPixel (x + 2,  y - 10, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 10, 0, 0, 0);
	gfx.PutPixel (x + 4,  y - 10, 102, 102, 102);
	gfx.PutPixel (x + 5,  y - 10, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 10, 255, 255, 255);
	gfx.PutPixel (x + 7,  y - 10, 255, 255, 255);
	gfx.PutPixel (x + 8,  y - 10, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 10, 102, 102, 102);
	gfx.PutPixel (x + 10, y - 10, 102, 102, 102);
	gfx.PutPixel (x + 11, y - 10, 102, 102, 102);
	gfx.PutPixel (x + 12, y - 10, 102, 102, 102);
	gfx.PutPixel (x + 13, y - 10, 102, 102, 102);
	gfx.PutPixel (x + 14, y - 10, 102, 102, 102);
	gfx.PutPixel (x + 15, y - 10, 102, 102, 102);
	gfx.PutPixel (x + 16, y - 10, 102, 102, 102);

	gfx.PutPixel (x + 2,  y - 9, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 9, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 9, 102, 102, 102);
	gfx.PutPixel (x + 5,  y - 9, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 9, 255, 255, 255);
	gfx.PutPixel (x + 7,  y - 9, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 9, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 9, 102, 102, 102);
	gfx.PutPixel (x + 10, y - 9, 102, 102, 102);
	gfx.PutPixel (x + 11, y - 9, 102, 102, 102);
	gfx.PutPixel (x + 12, y - 9, 102, 102, 102);
	gfx.PutPixel (x + 13, y - 9, 102, 102, 102);
	gfx.PutPixel (x + 14, y - 9, 102, 102, 102);
	gfx.PutPixel (x + 15, y - 9, 102, 102, 102);
	gfx.PutPixel (x + 16, y - 9, 102, 102, 102);

	gfx.PutPixel (x + 2,  y - 8, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 8, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 8, 255, 255, 255);
	gfx.PutPixel (x + 5,  y - 8, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 8, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 8, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 8, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 8, 102, 102, 102);
	gfx.PutPixel (x + 10, y - 8, 102, 102, 102);
	gfx.PutPixel (x + 11, y - 8, 102, 102, 102);
	gfx.PutPixel (x + 12, y - 8, 102, 102, 102);
	gfx.PutPixel (x + 13, y - 8, 102, 102, 102);
	gfx.PutPixel (x + 14, y - 8, 102, 102, 102);
	gfx.PutPixel (x + 15, y - 8, 102, 102, 102);
	gfx.PutPixel (x + 16, y - 8, 102, 102, 102);

	gfx.PutPixel (x + 2,  y - 7, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 7, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 7, 255, 255, 255);
	gfx.PutPixel (x + 5,  y - 7, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 7, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 7, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 7, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 7, 102, 102, 102);
	gfx.PutPixel (x + 10, y - 7, 255, 255, 255);
	gfx.PutPixel (x + 11, y - 7, 255, 255, 255);
	gfx.PutPixel (x + 12, y - 7, 255, 255, 255);
	gfx.PutPixel (x + 13, y - 7, 255, 255, 255);
	gfx.PutPixel (x + 14, y - 7, 255, 255, 255);
	gfx.PutPixel (x + 15, y - 7, 255, 255, 255);
	gfx.PutPixel (x + 16, y - 7, 255, 255, 255);
  
	gfx.PutPixel (x + 2,  y - 6, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 6, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 6, 255, 255, 255);
	gfx.PutPixel (x + 5,  y - 6, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 6, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 6, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 6, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 6, 255, 255, 255);
	gfx.PutPixel (x + 10, y - 6, 255, 255, 255);
	gfx.PutPixel (x + 11, y - 6, 0, 0, 0);
	gfx.PutPixel (x + 12, y - 6, 0, 0, 0);
	gfx.PutPixel (x + 13, y - 6, 0, 0, 0);
	gfx.PutPixel (x + 14, y - 6, 0, 0, 0);
	gfx.PutPixel (x + 15, y - 6, 0, 0, 0);
	gfx.PutPixel (x + 16, y - 6, 0, 0, 0);

	gfx.PutPixel (x + 2,  y - 5, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 5, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 5, 255, 255, 255);
	gfx.PutPixel (x + 5,  y - 5, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 5, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 5, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 5, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 5, 255, 255, 255);
	gfx.PutPixel (x + 10, y - 5, 0, 0, 0);
	gfx.PutPixel (x + 11, y - 5, 0, 0, 0);
	///////////////////////////////////////////////////////////////////////////
	gfx.PutPixel (x + 2,  y - 4, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 4, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 4, 255, 255, 255);
	gfx.PutPixel (x + 5,  y - 4, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 4, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 4, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 4, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 4, 255, 255, 255);
	gfx.PutPixel (x + 10, y - 4, 0, 0, 0);

	gfx.PutPixel (x + 2,  y - 3, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 3, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 3, 255, 255, 255);
	gfx.PutPixel (x + 5,  y - 3, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 3, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 3, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 3, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 3, 255, 255, 255);
	gfx.PutPixel (x + 10, y - 3, 0, 0, 0);
	
	gfx.PutPixel (x + 2,  y - 2, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 2, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 2, 255, 255, 255);
	gfx.PutPixel (x + 5,  y - 2, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 2, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 2, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 2, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 2, 255, 255, 255);
	gfx.PutPixel (x + 10, y - 2, 0, 0, 0);

	gfx.PutPixel (x + 2,  y - 1, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 1, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 1, 255, 255, 255);
	gfx.PutPixel (x + 5,  y - 1, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 1, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 1, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 1, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 1, 255, 255, 255);
	gfx.PutPixel (x + 10, y - 1, 0, 0, 0);

	gfx.PutPixel (x + 2,  y - 0, 0, 0, 0);
	gfx.PutPixel (x + 3,  y - 0, 102, 102, 102);
	gfx.PutPixel (x + 4,  y - 0, 255, 255, 255);
	gfx.PutPixel (x + 5,  y - 0, 255, 255, 255);
	gfx.PutPixel (x + 6,  y - 0, 102, 102, 102);
	gfx.PutPixel (x + 7,  y - 0, 102, 102, 102);
	gfx.PutPixel (x + 8,  y - 0, 102, 102, 102);
	gfx.PutPixel (x + 9,  y - 0, 255, 255, 255);
	gfx.PutPixel (x + 10, y - 0, 0, 0, 0);


}

void SpriteCodex::DrawRightCorner (const Vec2& top_left, Graphics& gfx)
{
	const int x = int (top_left.x);
	const int y = int (top_left.y);

	gfx.PutPixel (x - 6, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 7, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 8, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 9, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 10, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 11, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 12, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 13, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 14, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 15, y - 14, 0, 0, 0);
	gfx.PutPixel (x - 16, y - 14, 0, 0, 0);

	gfx.PutPixel (x - 4, y - 13, 0, 0, 0);
	gfx.PutPixel (x - 5, y - 13, 0, 0, 0);
	gfx.PutPixel (x - 6, y - 13, 0, 0, 0);
	gfx.PutPixel (x - 7, y - 13, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 13, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 13, 102, 102, 102);
	gfx.PutPixel (x - 10, y - 13, 102, 102, 102);
	gfx.PutPixel (x - 11, y - 13, 102, 102, 102);
	gfx.PutPixel (x - 12, y - 13, 102, 102, 102);
	gfx.PutPixel (x - 13, y - 13, 102, 102, 102);
	gfx.PutPixel (x - 14, y - 13, 102, 102, 102);
	gfx.PutPixel (x - 15, y - 13, 102, 102, 102);
	gfx.PutPixel (x - 16, y - 13, 102, 102, 102);

	gfx.PutPixel (x - 3, y - 12, 0, 0, 0);
	gfx.PutPixel (x - 4, y - 12, 0, 0, 0);
	gfx.PutPixel (x - 5, y - 12, 102, 102, 102);
	gfx.PutPixel (x - 6, y - 12, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 12, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 12, 255, 255, 255);
	gfx.PutPixel (x - 9, y - 12, 255, 255, 255);
	gfx.PutPixel (x - 10, y - 12, 255, 255, 255);
	gfx.PutPixel (x - 11, y - 12, 255, 255, 255);
	gfx.PutPixel (x - 12, y - 12, 255, 255, 255);
	gfx.PutPixel (x - 13, y - 12, 255, 255, 255);
	gfx.PutPixel (x - 14, y - 12, 255, 255, 255);
	gfx.PutPixel (x - 15, y - 12, 255, 255, 255);
	gfx.PutPixel (x - 16, y - 12, 255, 255, 255);

	gfx.PutPixel (x - 3, y - 11, 0, 0, 0);
	gfx.PutPixel (x - 4, y - 11, 102, 102, 102);
	gfx.PutPixel (x - 5, y - 11, 102, 102, 102);
	gfx.PutPixel (x - 6, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 7, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 8, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 9, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 10, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 11, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 12, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 13, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 14, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 15, y - 11, 255, 255, 255);
	gfx.PutPixel (x - 16, y - 11, 255, 255, 255);
  
	gfx.PutPixel (x - 2, y - 10, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 10, 0, 0, 0);
	gfx.PutPixel (x - 4, y - 10, 102, 102, 102);
	gfx.PutPixel (x - 5, y - 10, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 10, 255, 255, 255);
	gfx.PutPixel (x - 7, y - 10, 255, 255, 255);
	gfx.PutPixel (x - 8, y - 10, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 10, 102, 102, 102);
	gfx.PutPixel (x - 10, y - 10, 102, 102, 102);
	gfx.PutPixel (x - 11, y - 10, 102, 102, 102);
	gfx.PutPixel (x - 12, y - 10, 102, 102, 102);
	gfx.PutPixel (x - 13, y - 10, 102, 102, 102);
	gfx.PutPixel (x - 14, y - 10, 102, 102, 102);
	gfx.PutPixel (x - 15, y - 10, 102, 102, 102);
	gfx.PutPixel (x - 16, y - 10, 102, 102, 102);

	gfx.PutPixel (x - 2, y - 9, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 5, y - 9, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 9, 255, 255, 255);
	gfx.PutPixel (x - 7, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 10, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 11, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 12, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 13, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 14, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 15, y - 9, 102, 102, 102);
	gfx.PutPixel (x - 16, y - 9, 102, 102, 102);

	gfx.PutPixel (x - 2, y - 8, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 8, 255, 255, 255);
	gfx.PutPixel (x - 5, y - 8, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 10, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 11, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 12, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 13, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 14, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 15, y - 8, 102, 102, 102);
	gfx.PutPixel (x - 16, y - 8, 102, 102, 102);

	gfx.PutPixel (x - 2, y - 7, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 7, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 7, 255, 255, 255);
	gfx.PutPixel (x - 5, y - 7, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 7, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 7, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 7, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 7, 102, 102, 102);
	gfx.PutPixel (x - 10, y - 7, 255, 255, 255);
	gfx.PutPixel (x - 11, y - 7, 255, 255, 255);
	gfx.PutPixel (x - 12, y - 7, 255, 255, 255);
	gfx.PutPixel (x - 13, y - 7, 255, 255, 255);
	gfx.PutPixel (x - 14, y - 7, 255, 255, 255);
	gfx.PutPixel (x - 15, y - 7, 255, 255, 255);
	gfx.PutPixel (x - 16, y - 7, 255, 255, 255);

	gfx.PutPixel (x - 2, y - 6, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 6, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 6, 255, 255, 255);
	gfx.PutPixel (x - 5, y - 6, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 6, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 6, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 6, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 6, 255, 255, 255);
	gfx.PutPixel (x - 10, y - 6, 255, 255, 255);
	gfx.PutPixel (x - 11, y - 6, 0, 0, 0);
	gfx.PutPixel (x - 12, y - 6, 0, 0, 0);
	gfx.PutPixel (x - 13, y - 6, 0, 0, 0);
	gfx.PutPixel (x - 14, y - 6, 0, 0, 0);
	gfx.PutPixel (x - 15, y - 6, 0, 0, 0);
	gfx.PutPixel (x - 16, y - 6, 0, 0, 0);

	gfx.PutPixel (x - 2, y - 5, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 5, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 5, 255, 255, 255);
	gfx.PutPixel (x - 5, y - 5, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 5, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 5, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 5, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 5, 255, 255, 255);
	gfx.PutPixel (x - 10, y - 5, 0, 0, 0);
	gfx.PutPixel (x - 11, y - 5, 0, 0, 0);
	/////////////////////////////////////////////////////////////////////////////
	gfx.PutPixel (x - 2, y - 4, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 4, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 4, 255, 255, 255);
	gfx.PutPixel (x - 5, y - 4, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 4, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 4, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 4, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 4, 255, 255, 255);
	gfx.PutPixel (x - 10, y - 4, 0, 0, 0);

	gfx.PutPixel (x - 2, y - 3, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 3, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 3, 255, 255, 255);
	gfx.PutPixel (x - 5, y - 3, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 3, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 3, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 3, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 3, 255, 255, 255);
	gfx.PutPixel (x - 10, y - 3, 0, 0, 0);

	gfx.PutPixel (x - 2, y - 2, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 2, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 2, 255, 255, 255);
	gfx.PutPixel (x - 5, y - 2, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 2, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 2, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 2, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 2, 255, 255, 255);
	gfx.PutPixel (x - 10, y - 2, 0, 0, 0);

	gfx.PutPixel (x - 2, y - 1, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 1, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 1, 255, 255, 255);
	gfx.PutPixel (x - 5, y - 1, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 1, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 1, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 1, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 1, 255, 255, 255);
	gfx.PutPixel (x - 10, y - 1, 0, 0, 0);

	gfx.PutPixel (x - 2, y - 0, 0, 0, 0);
	gfx.PutPixel (x - 3, y - 0, 102, 102, 102);
	gfx.PutPixel (x - 4, y - 0, 255, 255, 255);
	gfx.PutPixel (x - 5, y - 0, 255, 255, 255);
	gfx.PutPixel (x - 6, y - 0, 102, 102, 102);
	gfx.PutPixel (x - 7, y - 0, 102, 102, 102);
	gfx.PutPixel (x - 8, y - 0, 102, 102, 102);
	gfx.PutPixel (x - 9, y - 0, 255, 255, 255);
	gfx.PutPixel (x - 10, y - 0, 0, 0, 0);
}

void SpriteCodex::DrawStraightPipe (const Vec2& top_left, Graphics& gfx, const int length)
{
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);
	const int pipe_width = 8;

	for(int y = top_left_y; y < top_left_y + pipe_width; ++y) {
		for(int x = top_left_x; x < top_left_x + length; ++x) {
			if(y == top_left_y || y == top_left_y + pipe_width) {
				gfx.PutPixel (x, y, Color (0, 0, 0));
			} else if(y == top_left_y + 2 || y == top_left_y + 3 || y == top_left_y + (pipe_width - 1)) {
				gfx.PutPixel (x, y, Color (255, 255, 255));
			} else {
				gfx.PutPixel (x, y, Color (102, 102, 102));
			}
		}
	}

}

void SpriteCodex::DrawSidewaysCylinder (const Vec2& top_left, Graphics& gfx)
{
	const int x = int (top_left.x);
	const int y = int (top_left.y);

	gfx.PutPixel (x + 2,  y + 0, 0, 0, 0);
	gfx.PutPixel (x + 3,  y + 0, 0, 0, 0);
	gfx.PutPixel (x + 4,  y + 0, 0, 0, 0);
	gfx.PutPixel (x + 5,  y + 0, 0, 0, 0);
	gfx.PutPixel (x + 6,  y + 0, 0, 0, 0);
	gfx.PutPixel (x + 7,  y + 0, 0, 0, 0);
	gfx.PutPixel (x + 8,  y + 0, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 0, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 11, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 12, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 13, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 14, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 17, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 18, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 19, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 20, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 23, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 24, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 25, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 26, y + 0, 0, 0, 0);
	gfx.PutPixel (x + 27, y + 0, 0, 0, 0);

	gfx.PutPixel (x + 1,  y + 1, 0, 0, 0);
	gfx.PutPixel (x + 2,  y + 1, 0, 0, 0);
	gfx.PutPixel (x + 3,  y + 1, 102, 102, 102);
	gfx.PutPixel (x + 4,  y + 1, 102, 102, 102);
	gfx.PutPixel (x + 5,  y + 1, 102, 102, 102);
	gfx.PutPixel (x + 6,  y + 1, 102, 102, 102);
	gfx.PutPixel (x + 7,  y + 1, 102, 102, 102);
	gfx.PutPixel (x + 8,  y + 1, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 1, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 12, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 13, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 14, y + 1, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 1, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 17, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 18, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 19, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 20, y + 1, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 1, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 23, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 24, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 25, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 26, y + 1, 102, 102, 102);
	gfx.PutPixel (x + 27, y + 1, 0, 0, 0);
	gfx.PutPixel (x + 28, y + 1, 0, 0, 0);

	gfx.PutPixel (x + 0,  y + 2, 0, 0, 0);
	gfx.PutPixel (x + 1,  y + 2, 0, 0, 0);
	gfx.PutPixel (x + 2,  y + 2, 255, 255, 255);
	gfx.PutPixel (x + 3,  y + 2, 255, 255, 255);
	gfx.PutPixel (x + 4,  y + 2, 255, 255, 255);
	gfx.PutPixel (x + 5,  y + 2, 255, 255, 255);
	gfx.PutPixel (x + 6,  y + 2, 255, 255, 255);
	gfx.PutPixel (x + 7,  y + 2, 255, 255, 255);
	gfx.PutPixel (x + 8,  y + 2, 102, 102, 102);
	gfx.PutPixel (x + 9,  y + 2, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 11, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 13, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 14, y + 2, 102, 102, 102);
	gfx.PutPixel (x + 15, y + 2, 102, 102, 102);
	gfx.PutPixel (x + 16, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 17, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 18, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 19, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 20, y + 2, 102, 102, 102);
	gfx.PutPixel (x + 21, y + 2, 102, 102, 102);
	gfx.PutPixel (x + 22, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 23, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 24, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 25, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 26, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 27, y + 2, 255, 255, 255);
	gfx.PutPixel (x + 28, y + 2, 0, 0, 0);
	gfx.PutPixel (x + 29, y + 2, 0, 0, 0);

	gfx.PutPixel (x + 0,  y + 3, 0, 0, 0);
	gfx.PutPixel (x + 1,  y + 3, 0, 0, 0);
	gfx.PutPixel (x + 2,  y + 3, 255, 255, 255);
	gfx.PutPixel (x + 3,  y + 3, 255, 255, 255);
	gfx.PutPixel (x + 4,  y + 3, 255, 255, 255);
	gfx.PutPixel (x + 5,  y + 3, 255, 255, 255);
	gfx.PutPixel (x + 6,  y + 3, 255, 255, 255);
	gfx.PutPixel (x + 7,  y + 3, 255, 255, 255);
	gfx.PutPixel (x + 8,  y + 3, 102, 102, 102);
	gfx.PutPixel (x + 9,  y + 3, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 11, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 13, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 14, y + 3, 102, 102, 102);
	gfx.PutPixel (x + 15, y + 3, 102, 102, 102);
	gfx.PutPixel (x + 16, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 17, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 18, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 19, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 20, y + 3, 102, 102, 102);
	gfx.PutPixel (x + 21, y + 3, 102, 102, 102);
	gfx.PutPixel (x + 22, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 23, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 24, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 25, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 26, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 27, y + 3, 255, 255, 255);
	gfx.PutPixel (x + 28, y + 3, 0, 0, 0);
	gfx.PutPixel (x + 29, y + 3, 0, 0, 0);

	gfx.PutPixel (x + 0,  y + 4, 0, 0, 0);
	gfx.PutPixel (x + 1,  y + 4, 102, 102, 102);
	gfx.PutPixel (x + 2,  y + 4, 102, 102, 102);
	gfx.PutPixel (x + 3,  y + 4, 102, 102, 102);
	gfx.PutPixel (x + 4,  y + 4, 102, 102, 102);
	gfx.PutPixel (x + 5,  y + 4, 102, 102, 102);
	gfx.PutPixel (x + 6,  y + 4, 102, 102, 102);
	gfx.PutPixel (x + 7,  y + 4, 102, 102, 102);
	gfx.PutPixel (x + 8,  y + 4, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 4, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 12, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 13, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 14, y + 4, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 4, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 17, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 18, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 19, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 20, y + 4, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 4, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 23, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 24, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 25, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 26, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 27, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 28, y + 4, 102, 102, 102);
	gfx.PutPixel (x + 29, y + 4, 0, 0, 0);

	gfx.PutPixel (x + 0,  y + 5, 0, 0, 0);
	gfx.PutPixel (x + 1,  y + 5, 102, 102, 102);
	gfx.PutPixel (x + 2,  y + 5, 102, 102, 102);
	gfx.PutPixel (x + 3,  y + 5, 102, 102, 102);
	gfx.PutPixel (x + 4,  y + 5, 102, 102, 102);
	gfx.PutPixel (x + 5,  y + 5, 102, 102, 102);
	gfx.PutPixel (x + 6,  y + 5, 102, 102, 102);
	gfx.PutPixel (x + 7,  y + 5, 102, 102, 102);
	gfx.PutPixel (x + 8,  y + 5, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 5, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 12, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 13, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 14, y + 5, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 5, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 17, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 18, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 19, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 20, y + 5, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 5, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 23, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 24, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 25, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 26, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 27, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 28, y + 5, 102, 102, 102);
	gfx.PutPixel (x + 29, y + 5, 0, 0, 0);

	gfx.PutPixel (x + 0,  y + 6, 0, 0, 0);
	gfx.PutPixel (x + 1,  y + 6, 102, 102, 102);
	gfx.PutPixel (x + 2,  y + 6, 102, 102, 102);
	gfx.PutPixel (x + 3,  y + 6, 102, 102, 102);
	gfx.PutPixel (x + 4,  y + 6, 102, 102, 102);
	gfx.PutPixel (x + 5,  y + 6, 102, 102, 102);
	gfx.PutPixel (x + 6,  y + 6, 102, 102, 102);
	gfx.PutPixel (x + 7,  y + 6, 102, 102, 102);
	gfx.PutPixel (x + 8,  y + 6, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 6, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 12, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 13, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 14, y + 6, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 6, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 17, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 18, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 19, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 20, y + 6, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 6, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 23, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 24, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 25, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 26, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 27, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 28, y + 6, 102, 102, 102);
	gfx.PutPixel (x + 29, y + 6, 0, 0, 0);

	gfx.PutPixel (x + 0,  y + 7, 0, 0, 0);
	gfx.PutPixel (x + 1,  y + 7, 102, 102, 102);
	gfx.PutPixel (x + 2,  y + 7, 102, 102, 102);
	gfx.PutPixel (x + 3,  y + 7, 102, 102, 102);
	gfx.PutPixel (x + 4,  y + 7, 102, 102, 102);
	gfx.PutPixel (x + 5,  y + 7, 102, 102, 102);
	gfx.PutPixel (x + 6,  y + 7, 102, 102, 102);
	gfx.PutPixel (x + 7,  y + 7, 102, 102, 102);
	gfx.PutPixel (x + 8,  y + 7, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 7, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 12, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 13, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 14, y + 7, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 7, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 17, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 18, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 19, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 20, y + 7, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 7, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 23, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 24, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 25, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 26, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 27, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 28, y + 7, 102, 102, 102);
	gfx.PutPixel (x + 29, y + 7, 0, 0, 0);

	gfx.PutPixel (x + 0,  y + 8, 0, 0, 0);
	gfx.PutPixel (x + 1,  y + 8, 102, 102, 102);
	gfx.PutPixel (x + 2,  y + 8, 102, 102, 102);
	gfx.PutPixel (x + 3,  y + 8, 102, 102, 102);
	gfx.PutPixel (x + 4,  y + 8, 102, 102, 102);
	gfx.PutPixel (x + 5,  y + 8, 102, 102, 102);
	gfx.PutPixel (x + 6,  y + 8, 102, 102, 102);
	gfx.PutPixel (x + 7,  y + 8, 102, 102, 102);
	gfx.PutPixel (x + 8,  y + 8, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 8, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 12, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 13, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 14, y + 8, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 8, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 17, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 18, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 19, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 20, y + 8, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 8, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 23, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 24, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 25, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 26, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 27, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 28, y + 8, 102, 102, 102);
	gfx.PutPixel (x + 29, y + 8, 0, 0, 0);

	gfx.PutPixel (x + 0,  y + 9, 0, 0, 0);
	gfx.PutPixel (x + 1,  y + 9, 102, 102, 102);
	gfx.PutPixel (x + 2,  y + 9, 102, 102, 102);
	gfx.PutPixel (x + 3,  y + 9, 102, 102, 102);
	gfx.PutPixel (x + 4,  y + 9, 102, 102, 102);
	gfx.PutPixel (x + 5,  y + 9, 102, 102, 102);
	gfx.PutPixel (x + 6,  y + 9, 102, 102, 102);
	gfx.PutPixel (x + 7,  y + 9, 102, 102, 102);
	gfx.PutPixel (x + 8,  y + 9, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 9, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 12, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 13, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 14, y + 9, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 9, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 17, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 18, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 19, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 20, y + 9, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 9, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 23, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 24, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 25, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 26, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 27, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 28, y + 9, 102, 102, 102);
	gfx.PutPixel (x + 29, y + 9, 0, 0, 0);

	gfx.PutPixel (x + 0,  y + 10, 0, 0, 0);
	gfx.PutPixel (x + 1,  y + 10, 0, 0, 0);
	gfx.PutPixel (x + 2,  y + 10, 102, 102, 102);
	gfx.PutPixel (x + 3,  y + 10, 102, 102, 102);
	gfx.PutPixel (x + 4,  y + 10, 102, 102, 102);
	gfx.PutPixel (x + 5,  y + 10, 102, 102, 102);
	gfx.PutPixel (x + 6,  y + 10, 102, 102, 102);
	gfx.PutPixel (x + 7,  y + 10, 102, 102, 102);
	gfx.PutPixel (x + 8,  y + 10, 102, 102, 102);
	gfx.PutPixel (x + 9,  y + 10, 102, 102, 102);
	gfx.PutPixel (x + 10, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 11, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 12, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 13, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 14, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 15, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 16, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 17, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 18, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 19, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 20, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 21, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 22, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 23, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 24, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 25, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 26, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 27, y + 10, 102, 102, 102);
	gfx.PutPixel (x + 28, y + 10, 0, 0, 0);
	gfx.PutPixel (x + 29, y + 10, 0, 0, 0);

	gfx.PutPixel (x + 1,  y + 11, 0, 0, 0);
	gfx.PutPixel (x + 2,  y + 11, 0, 0, 0);
	gfx.PutPixel (x + 3,  y + 11, 255, 255, 255);
	gfx.PutPixel (x + 4,  y + 11, 255, 255, 255);
	gfx.PutPixel (x + 5,  y + 11, 255, 255, 255);
	gfx.PutPixel (x + 6,  y + 11, 255, 255, 255);
	gfx.PutPixel (x + 7,  y + 11, 255, 255, 255);
	gfx.PutPixel (x + 8,  y + 11, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 11, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 11, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 12, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 13, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 14, y + 11, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 11, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 17, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 18, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 19, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 20, y + 11, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 11, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 23, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 24, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 25, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 26, y + 11, 255, 255, 255);
	gfx.PutPixel (x + 27, y + 11, 0, 0, 0);
	gfx.PutPixel (x + 28, y + 11, 0, 0, 0);

	gfx.PutPixel (x + 2,  y + 12, 0, 0, 0);
	gfx.PutPixel (x + 3,  y + 12, 0, 0, 0);
	gfx.PutPixel (x + 4,  y + 12, 0, 0, 0);
	gfx.PutPixel (x + 5,  y + 12, 0, 0, 0);
	gfx.PutPixel (x + 6,  y + 12, 0, 0, 0);
	gfx.PutPixel (x + 7,  y + 12, 0, 0, 0);
	gfx.PutPixel (x + 8,  y + 12, 0, 0, 0);
	gfx.PutPixel (x + 9,  y + 12, 0, 0, 0);
	gfx.PutPixel (x + 10, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 11, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 12, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 13, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 14, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 15, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 16, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 17, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 18, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 19, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 20, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 21, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 22, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 23, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 24, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 25, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 26, y + 12, 0, 0, 0);
	gfx.PutPixel (x + 27, y + 12, 0, 0, 0);
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

	for(int y = top_left_y + font_size * 0; y < top_left_y + font_size * 4; ++y) {
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

void SpriteCodex::Draw_Colon (const Vec2& top_left, Graphics& gfx, int size_mod, Color c)
{
	font_size = pixel_size * size_mod;
	const int top_left_x = int (top_left.x);
	const int top_left_y = int (top_left.y);

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

