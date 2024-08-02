# include "scenes/main_menu.hpp"


MainMenu::MainMenu(MainLoop * program) : Scene(program)
{
    load_fonts();
    this->button = main_menu_button("Button", concert_one_40, 40);
    this->button.get_rect()->set_center(this->program->get_screen_rect()->get_center());
}


MainMenu::~MainMenu()
{
    unload_fonts();
}


void MainMenu::check_events()
{

}


void MainMenu::update()
{
    if (this->button.is_hovered())
    {
        SetMouseCursor(MOUSE_CURSOR_POINTING_HAND);
    }
    else
    {
        SetMouseCursor(MOUSE_CURSOR_DEFAULT);
    }
}


void MainMenu::draw()
{
    ClearBackground(RAYWHITE);
    this->button.draw();
}
