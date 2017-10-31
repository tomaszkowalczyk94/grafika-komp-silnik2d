#include <iostream>
#include <allegro.h>

#define WIDTH 1600
#define HEIGHT 900

using namespace std;

int initiall(){
allegro_init();
set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
install_keyboard();
install_mouse();
return 0;
}

int main(){
initiall();
while
( (readkey()& 0xff) != 27);
allegro_exit();
return 0;
}
END_OF_MAIN()
