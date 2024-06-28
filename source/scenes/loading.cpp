# include "scenes/loading.hpp"


Loading::Loading(MainLoop * program) : Scene(program)
{
    this->raylib_logo = LoadTexture("../resources/graphics/raylib_logo.png");
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
    ClearBackground((this->lights_on) ? WHITE : BLACK);
    DrawTexture(this->raylib_logo, 50, 50, WHITE);
}
