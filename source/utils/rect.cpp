# include "utils/rect.hpp"


// Operations


Rect Rect::move(Vector2 delta)
{
    float new_left = this->left + delta.x;
    float new_top = this->top + delta.y;

    return Rect(new_left, new_top, this->width, this->height);
}


void Rect::move_ip(Vector2 delta)
{
    this->left += delta.x;
    this->top += delta.y;
}


// Setter


void Rect::set(float x, float y, float w, float h)
{
    this->left = x;
    this->top = y;
    this->width = w;
    this->height = h;
}


// getter


Rectangle Rect::get_rectangle()
{
    return Rectangle({this->left, this->top, this->width, this->height});
}


// Size getters


float Rect::get_width()
{
    return this->width;
}


float Rect::get_height()
{
    return this->height;
}


Vector2 Rect::get_size()
{
    return {this->width, this->height};
}


// Size Setters


void Rect::set_width(float width)
{
    this->width = width;
}


void Rect::set_height(float height)
{
    this->height = height;
}


void Rect::set_size(Vector2 size)
{
    this->width = size.x;
    this->height = size.y;
}


// Position Getters


float Rect::get_left()
{
    return this->left;
}


float Rect::get_top()
{
    return this->top;
}


float Rect::get_right()
{
    return this->left + this->width;
}


float Rect::get_bottom()
{
    return this->top + this->height;
}


Vector2 Rect::get_topleft()
{
    return {this->left, this->top};
}


Vector2 Rect::get_midtop()
{
    return
    {
        this->left + this->width / 2,
        this->top
    };
}


Vector2 Rect::get_topright()
{
    return
    {
        this->left + this->width,
        this->top
    };
}


Vector2 Rect::get_midleft()
{
    return
    {
        this->left,
        this->top + this->height / 2
    };
}


Vector2 Rect::get_center()
{
    return
    {
        this->left + this->width / 2,
        this->top + this->height / 2
    };
}


Vector2 Rect::get_midright()
{
    return
    {
        this->left + this->width,
        this->top + this->height / 2
    };
}


Vector2 Rect::get_bottomleft()
{
    return
    {
        this->left,
        this->top + this->height
    };
}


Vector2 Rect::get_midbottom()
{
    return
    {
        this->left + this->width / 2,
        this->top + this->height
    };
}


Vector2 Rect::get_bottomright()
{
    return
    {
        this->left + this->width,
        this->top + this->height
    };
}


// Position Setters


void Rect::set_left(float left)
{
    this->left = left;
}


void Rect::set_top(float top)
{
    this->top = top;
}


void Rect::set_right(float right)
{
    this->left = right - this->width;
}


void Rect::set_bottom(float bottom)
{
    this->top = bottom - this->height;
}


void Rect::set_topleft(Vector2 topleft)
{
    this->left = topleft.x;
    this->top = topleft.y;
}


void Rect::set_midtop(Vector2 midtop)
{
    this->left = midtop.x - this->width / 2;
    this->top = midtop.y;
}


void Rect::set_topright(Vector2 topright)
{
    this->left = topright.x - this->width;
    this->top = topright.y;
}


void Rect::set_midleft(Vector2 midleft)
{
    this->left = midleft.x;
    this->top = midleft.y - this->height / 2;
}


void Rect::set_center(Vector2 center)
{
    this->left = center.x - this->width / 2;
    this->top = center.y - this->height / 2;
}


void Rect::set_midright(Vector2 midright)
{
    this->left = midright.x - this->width;
    this->top = midright.y - this->height / 2;
}


void Rect::set_bottomleft(Vector2 bottomleft)
{
    this->left = bottomleft.x;
    this->top = bottomleft.y - this->height;
}


void Rect::set_midbottom(Vector2 midbottom)
{
    this->left = midbottom.x - this->width / 2;
    this->top = midbottom.y - this->height;
}


void Rect::set_bottomright(Vector2 bottomright)
{
    this->left = bottomright.x - this->width;
    this->top = bottomright.y - this->height;
}
