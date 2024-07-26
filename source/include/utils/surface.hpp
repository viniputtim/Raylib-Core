# ifndef SURFACE_HPP
# define SURFACE_HPP


# include <raylib.h>
# include "utils/rect.hpp"


class Surface
{
    public:
        Surface() {};
        Surface(const char * image_path);
        ~Surface();

        Rect * get_rect();
        void draw();

    private:
        Image image;
        Texture2D texture;
        Rect rect;
        Color color = WHITE;
};


# endif
