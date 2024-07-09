# ifndef LOADING_HPP
# define LOADING_HPP


# include <raylib.h>
# include "main_loop.hpp"
# include "scenes/scene.hpp"
# include "utils/surface.hpp"


class Loading : public Scene
{
    public:
        Loading(MainLoop * program);
        ~Loading() {};
        void check_events() override;
        void update() override;
        void draw() override;

    private:
        Surface raylib_logo = "../resources/graphics/raylib_logo.png";
        Rect screen_rect = {0, 0, GetScreenWidth(), GetScreenHeight()};
};


# endif
