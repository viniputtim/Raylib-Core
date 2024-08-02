# include "style/buttons.hpp"


Button main_menu_button(std::string text, Font font, int font_size)
{
    Button button
    {
        text,
        font,
        font_size,
        WHITE,
        2,
        BLACK,
        {2, 2},
        BLUE,
        {100, 25},
        YELLOW,
        {30, 30},
        20,
        BLACK,
        {10, 10},
        YELLOW,
        SKYBLUE,
        YELLOW
    };

    return button;
}
