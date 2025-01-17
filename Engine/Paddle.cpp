#include "Paddle.h"
#include <cmath>

Paddle::Paddle (const Vec2& set_position, float set_half_width, float set_half_height)
   :
   position(set_position),
   half_width(set_half_width),
   half_height(set_half_height)
{
}

void Paddle::Draw (Graphics& gfx) const
{
   RectF rect = GetRect ();
   gfx.DrawRect (rect, wing_color);
   rect.left += wing_width;
   rect.right -= wing_width;
   gfx.DrawRect (rect, color);
}

bool Paddle::DoBallCollision (Ball& ball)
{
   if(!is_cooldown) {
      const RectF rect = GetRect ();
      if(rect.IsOverlappingWith (ball.GetRect ())) {
         const Vec2 ball_position = ball.GetPosition ();
         if(std::signbit (ball.GetVelocity ().x) == std::signbit ((ball_position - position).x)) {
            ball.ReboundY ();
         } else if(ball_position.x >= rect.left && ball_position.x <= rect.right) {
            ball.ReboundY ();
         } else {
            ball.ReboundX ();
         }
			is_cooldown = true;
         return true;
      }
   }
    return false;
}

void Paddle::DoWallCollision (const RectF& walls)
{
   const RectF rect = GetRect ();
   if(rect.left < walls.left) {
      position.x += walls.left - rect.left;
   } else if(rect.right > walls.right) {
      position.x -= rect.right - walls.right;
   }
}

void Paddle::Update (const Keyboard& kbd, float dt)
{
   if(kbd.KeyIsPressed (VK_LEFT)) {
      position.x -= speed * dt;
   }
   if(kbd.KeyIsPressed (VK_RIGHT)) {
      position.x += speed * dt;
   }
}

RectF Paddle::GetRect () const
{
   return RectF::FromCenter (position, half_width, half_height);
}

void Paddle::ResetCooldown ()
{
	is_cooldown = false;
}
