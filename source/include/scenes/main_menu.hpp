# ifndef MAIN_MENU_HPP
# define MAIN_MENU_HPP


# include <raylib.h>
# include "main_loop.hpp"
# include "scenes/scene.hpp"

class MainMenu : public Scene
{
    public:
        MainMenu(MainLoop * program) : Scene(program) {};
        ~MainMenu() {};
        void check_events() override {};
        void update() override {};
        void draw() override
        {
            ClearBackground(BLUE);
        };
};


# endif
