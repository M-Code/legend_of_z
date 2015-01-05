#ifndef Z_MAIN_MENU_SCREEN
#define Z_MAIN_MENU_SCREEN

#include "SDL2/SDL.h"
#include "z_screen.h"

class Z_MainMenuScreen : public Z_Screen {
    public:
        void Render(SDL_Renderer* renderer);

};

#endif
