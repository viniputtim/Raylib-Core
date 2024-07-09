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
        Color color = WHITE;
        Image image;
        Texture2D texture;
        Rect rect;
};


# endif
