# ifndef TEXT_HPP
# define TEXT_HPP


# include <raylib.h>
# include <memory>
# include <string>
# include "utils/rect.hpp"


class Text
{
    public:
        Text() {};
        Text(
            std::string text, Font font, int size, Color color, int spacing,
            Color shadow_color, Vector2 shadow_pos
        );
        ~Text() {};

        std::shared_ptr<Rect> get_rect();
        void draw();

    private:
        std::string text;
        Font font;
        int size;
        Color color;
        int spacing;
        std::shared_ptr<Rect> rect;
        Color shadow_color;
        Vector2 shadow_pos;
};


# endif
