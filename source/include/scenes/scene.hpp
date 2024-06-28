# ifndef SCENE_HPP
# define SCENE_HPP


class MainLoop;


class Scene
{
    public:
        Scene(MainLoop * program) : program(program) {};
        ~Scene() {};
        virtual void check_events() = 0;
        virtual void update() = 0;
        virtual void draw() = 0;

    protected:
        MainLoop * program;
};


# endif
