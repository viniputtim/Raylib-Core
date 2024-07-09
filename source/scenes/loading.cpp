# include "scenes/loading.hpp"


Loading::Loading(MainLoop * program) : Scene(program)
{
    this->raylib_logo.get_rect()->set_center(this->screen_rect.get_center());
    this->program->set_timeout(10, [this] () {this->program->set_scene("main menu");});
}


void Loading::check_events()
{

}


void Loading::update()
{

}


void Loading::draw()
{
    ClearBackground(WHITE);
    this->raylib_logo.draw();
}
