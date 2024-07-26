# include "scenes/main_menu.hpp"


MainMenu::MainMenu(MainLoop * program) : Scene(program)
{
    this->text.get_rect()->set_center(this->program->get_screen_rect()->get_center());
}


void MainMenu::check_events()
{

}


void MainMenu::update()
{

}


void MainMenu::draw()
{
    ClearBackground(RAYWHITE);
    this->text.draw();
}
