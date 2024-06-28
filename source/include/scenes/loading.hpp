# ifndef LOADING_HPP
# define LOADING_HPP


# include <raylib.h>
# include "main_loop.hpp"
# include "scenes/scene.hpp"


class Loading : public Scene
{
    public:
        Loading(MainLoop * program);
        ~Loading() {};
        void check_events() override;
        void update() override;
        void draw() override;

    private:
        Texture2D raylib_logo;
        bool lights_on = true;
};


# endif
