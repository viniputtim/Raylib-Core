# ifndef MAIN_MENU_HPP
# define MAIN_MENU_HPP


# include <raylib.h>
# include "main_loop.hpp"
# include "scenes/scene.hpp"
# include "style/buttons.hpp"
# include "style/fonts.hpp"
# include "ui/button.hpp"


class MainMenu : public Scene
{
    public:
        MainMenu(MainLoop * program);
        ~MainMenu();
        void check_events() override;
        void update() override;
        void draw() override;

    private:
        Button button;
};


# endif
