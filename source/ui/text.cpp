# include "ui/text.hpp"


Text::Text(std::string text, Font font, int size, Color color, int spacing, Color shadow_color, Vector2 shadow_pos)
{
    this->text = text;
    this->font = font;
    this->size = size;
    this->color = color;
    this->spacing = spacing;
    this->shadow_color = shadow_color;
    this->shadow_pos = shadow_pos;

    this->calculate_rect();
}


void Text::calculate_rect()
{
    Vector2 size = MeasureTextEx(
        this->font, this->text.c_str(), this->size, this->spacing
    );

    this->rect = Rect(0, 0, size.x, size.y);
}


Rect * Text::get_rect()
{
    return &this->rect;
}


void Text::draw()
{
    DrawTextEx(
        this->font, this->text.c_str(), this->rect.move(this->shadow_pos).get_topleft(), this->size,
        this->spacing, this->shadow_color
    );
    DrawTextEx(
        this->font, this->text.c_str(), this->rect.get_topleft(), this->size,
        this->spacing, this->color
    );
}
