#include "Engine.h"
#include <allegro.h>

Engine::Engine()
{
    //ctor
}

Engine::~Engine()
{
    //dtor
}

Engine::initiall()
{
    allegro_init();
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
    install_keyboard();
    install_mouse();
    return 0;

}
