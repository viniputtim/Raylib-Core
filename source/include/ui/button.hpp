# ifndef BUTTON_HPP
# define BUTTON_HPP


# include <raylib.h>
# include <map>
# include <string>
# include "utils/rect.hpp"
# include "ui/text.hpp"


class Button
{
    public:
        Button() {};
        Button(
            std::string text, Font font, int font_size, Color text_color,
            int font_spacing, Color text_shadow_color, Vector2 text_shadow_pos, Color inner_color,
            Vector2 padding, Color border_color, Vector2 border_size, float border_radius,
            Color shadow_color, Vector2 shadow_pos, Color text_color_hover, Color inner_color_hover,
            Color border_color_hover
        );
        ~Button() {};

        bool is_hovered();
        Rect * get_rect();
        void draw();

    private:
        Text text;
        Color inner_color;
        Rect inner_rect;
        Color border_color;
        Rect border_rect;
        float border_radius;
        Color shadow_color;
        Vector2 shadow_pos;
        Text text_hover;
        Color inner_color_hover;
        Color border_color_hover;

        void update();
};


# endif
