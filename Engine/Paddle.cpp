#include "Paddle.h"

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

bool Paddle::DoBallCollision (Ball& ball) const
{
   if(ball.GetVelocity().y > 0.0f && GetRect ().IsOverlappingWith (ball.GetRect ())) {
      ball.ReboundY ();
      return true;
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
