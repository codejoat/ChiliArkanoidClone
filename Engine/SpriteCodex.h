#pragma once

#include "Graphics.h"
#include "Vec2.h"
#include "Colors.h"

class SpriteCodex
{
public:
	// centered drawing of 14x14 sprite
	static void DrawBall( const Vec2& center,Graphics& gfx );
	static void DrawWallPipe (const Vec2& top_left, Graphics& gfx);
	static void DrawLeftCorner (const Vec2& top_left, Graphics& gfx);
	static void DrawRightCorner (const Vec2& top_left, Graphics& gfx);
	static void DrawStraightPipe (const Vec2& top_left, Graphics& gfx, const int length);
	static void DrawSidewaysCylinder (const Vec2& top_left, Graphics& gfx);

	static void Draw_A (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_B (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_C (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_D (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_E (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_F (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_G (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_H (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_I (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_J (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_K (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_L (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_M (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_N (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_O (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_P (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_Q (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_R (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_S (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_T (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_U (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_V (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_W (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_X (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_Y (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_Z (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_0 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_1 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_2 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_3 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_4 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_5 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_6 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_7 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_8 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_9 (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_Colon (const Vec2& top_left, Graphics& gfx, int size_mod, Color c);
	static void Draw_Short_Space (const Vec2& top_left, Graphics& gfx, int size_mod, Color c, bool block);
	static void Draw_Full_Space (const Vec2& top_left, Graphics& gfx, int size_mod, Color c, bool block);

private:
	static constexpr int pixel_size = 2;
	static int font_size;
};