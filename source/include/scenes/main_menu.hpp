# ifndef MAIN_MENU_HPP
# define MAIN_MENU_HPP


# include <raylib.h>
# include "main_loop.hpp"
# include "scenes/scene.hpp"
# include "ui/text.hpp"


class MainMenu : public Scene
{
    public:
        MainMenu(MainLoop * program);
        ~MainMenu() {};
        void check_events() override;
        void update() override;
        void draw() override;

    private:
        Text text = {"Main Menu", GetFontDefault(), 80, RED, 2, BLACK, (Vector2) {10.0f, 10.0f}};
};


# endif
