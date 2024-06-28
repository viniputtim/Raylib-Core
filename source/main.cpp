# include "main_loop.hpp"


int main(int argc, char * argv[])
{
    SetTargetFPS(0);
    InitAudioDevice();
    SetMasterVolume(0.5);
    InitWindow(0, 0, "Game");
    ToggleFullscreen();

    MainLoop main_loop;
    main_loop.run();

    CloseAudioDevice();
    CloseWindow();


    return 0;
}
