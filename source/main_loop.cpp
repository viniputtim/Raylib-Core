# include "main_loop.hpp"


MainLoop::MainLoop()
{
    this->scenes["loading"] = [this] () {this->current_scene = std::make_unique<Loading> (this);};
    this->scenes["main menu"] = [this] () {this->current_scene = std::make_unique<MainMenu> (this);};
    this->set_scene("loading");
}


void MainLoop::run()
{
    while (this->running && !WindowShouldClose())
    {
        this->check_scheduled_events();
        this->check_events();
        this->update();
        this->draw();
    }
}


void MainLoop::quit()
{
    this->running = false;
}


void MainLoop::check_scheduled_events()
{
    for (int i {0}; i < this->scheduled_events.size(); ++i)
    {
        if (this->scheduled_events[i]->is_marked_for_deletion())
        {
            this->scheduled_events.erase(this->scheduled_events.begin() + i);
            --i;
        }
        else
        {
            this->scheduled_events[i]->call();
        }
    }
}


void MainLoop::check_events()
{
    if (IsKeyReleased(KEY_TAB))
    {
        this->show_fps = !this->show_fps;
    }

    this->current_scene->check_events();
}


void MainLoop::update()
{
    this->current_scene->update();
}


void MainLoop::draw()
{
    BeginDrawing();

    this->current_scene->draw();

    if (this->show_fps)
    {
        DrawFPS(0, 0);
    }

    EndDrawing();
}


void MainLoop::set_scene(std::string scene_name)
{
    this->scenes[scene_name]();
}


Rect * MainLoop::get_screen_rect()
{
    return &this->screen_rect;
}
