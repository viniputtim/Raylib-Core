# ifndef MAIN_LOOP_HPP
# define MAIN_LOOP_HPP


# include <raylib.h>
# include <functional>
# include <map>
# include <memory>
# include <string>
# include "scenes/loading.hpp"
# include "scenes/main_menu.hpp"
# include "scenes/scene.hpp"
# include "utils/scheduled_event.hpp"


class MainLoop
{
    public:
        MainLoop();
        ~MainLoop() {};
        void run();
        void quit();
        void check_scheduled_events();
        void check_events();
        void update();
        void draw();
        void set_scene(std::string scene_name);
        Rect * get_screen_rect();

        template<typename F, typename ...Args>
        std::shared_ptr<ScheduledEvent> set_timeout(float seconds, F function, Args ...args)
        {
            std::shared_ptr<ScheduledEvent> scheduled_event = std::make_shared<ScheduledEvent> (
                false, seconds, function, args...
            );

            this->scheduled_events.push_back(scheduled_event);

            return scheduled_event;
        }

        template<typename F, typename ...Args>
        std::shared_ptr<ScheduledEvent> set_interval(float seconds, F function, Args ...args)
        {
            std::shared_ptr<ScheduledEvent> scheduled_event = std::make_shared<ScheduledEvent> (
                true, seconds, function, args...
            );

            this->scheduled_events.push_back(scheduled_event);

            return scheduled_event;
        }

    private:
        bool running = true;
        bool show_fps = false;
        std::unique_ptr<Scene> current_scene;
        std::map<std::string, std::function<void()>> scenes;
        std::vector<std::shared_ptr<ScheduledEvent>> scheduled_events;
        Rect screen_rect = {0, 0, GetScreenWidth(), GetScreenHeight()};
};


# endif
