# ifndef RECT_HPP
# define RECT_HPP


# include <raylib.h>


class Rect
{
    public:
        Rect() {};
        Rect(float x, float y, float w, float h) : left(x), top(y), width(w), height(h) {};
        ~Rect() {};

        float get_width();
        float get_height();
        Vector2 get_size();

        void set_width(float width);
        void set_height(float height);
        void set_size(Vector2 size);

        float get_left();
        float get_top();
        float get_right();
        float get_bottom();
        Vector2 get_topleft();
        Vector2 get_midtop();
        Vector2 get_topright();
        Vector2 get_midleft();
        Vector2 get_center();
        Vector2 get_midright();
        Vector2 get_bottomleft();
        Vector2 get_midbottom();
        Vector2 get_bottomright();

        void set_left(float left);
        void set_top(float top);
        void set_right(float right);
        void set_bottom(float bottom);
        void set_topleft(Vector2 topleft);
        void set_midtop(Vector2 midtop);
        void set_topright(Vector2 topright);
        void set_midleft(Vector2 midleft);
        void set_center(Vector2 center);
        void set_midright(Vector2 midright);
        void set_bottomleft(Vector2 bottomleft);
        void set_midbottom(Vector2 midbottom);
        void set_bottomright(Vector2 bottomright);

    private:
        float width = 0;
        float height = 0;
        float left = 0;
        float top = 0;
};


# endif
