# ifndef SURFACE_HPP
# define SURFACE_HPP


# include <raylib.h>
# include <memory>
# include "utils/rect.hpp"


class Surface
{
    public:
        Surface() {};
        Surface(const char * image_path);
        ~Surface();

        std::shared_ptr<Rect> get_rect();
        void draw();

    private:
        Image image;
        Texture2D texture;
        std::shared_ptr<Rect> rect;
        Color color {WHITE};
};


# endif
