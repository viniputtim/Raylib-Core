# include "ui/button.hpp"


Button::Button(
    std::string text, Font font, int font_size, Color text_color, int font_spacing,
    Color text_shadow_color, Vector2 text_shadow_pos, Color inner_color, Vector2 padding,
    Color border_color, Vector2 border_size, float border_radius, Color shadow_color,
    Vector2 shadow_pos, Color text_color_hover, Color inner_color_hover, Color border_color_hover
)
{
    this->text = Text(
        text, font, font_size, text_color, font_spacing, text_shadow_color, text_shadow_pos
    );
    this->inner_color = inner_color;
    this->border_color = border_color;
    this->border_radius = border_radius;
    this->shadow_color = shadow_color;
    this->shadow_pos = shadow_pos;
    this->text_hover = Text(
        text, font, font_size, text_color_hover, font_spacing, text_shadow_color, text_shadow_pos
    );
    this->inner_color_hover = inner_color_hover;
    this->border_color_hover = border_color_hover;

    this->inner_rect = Rect(
        0, 0, this->text.get_rect()->get_width() + padding.x,
        this->text.get_rect()->get_height() + padding.y
    );

    this->border_rect = Rect(
        0, 0, this->inner_rect.get_width() + border_size.x,
        this->inner_rect.get_height() + border_size.y
    );
}


bool Button::is_hovered()
{
    return CheckCollisionPointRec(GetMousePosition(), this->border_rect.get_rectangle());
}


Rect * Button::get_rect()
{
    return &this->border_rect;
}


void Button::update()
{
    Vector2 center = this->border_rect.get_center();

    this->text.get_rect()->set_center(center);
    this->text_hover.get_rect()->set_center(center);
    this->inner_rect.set_center(center);
}


void Button::draw()
{
    this->update();

    DrawRectangleRounded(
        this->border_rect.move(this->shadow_pos).get_rectangle(), this->border_radius, 0,
        this->shadow_color
    );

    DrawRectangleRounded(
        this->border_rect.get_rectangle(), this->border_radius, 0,
        this->is_hovered() ? this->border_color_hover : this->border_color
    );

    DrawRectangleRounded(
        this->inner_rect.get_rectangle(), this->border_radius, 0,
        this->is_hovered() ? this->inner_color_hover : this->inner_color
    );

    this->is_hovered() ? this->text_hover.draw() : this->text.draw();

}
