#ifndef Z_MAIN_MENU_SCREEN
#define Z_MAIN_MENU_SCREEN

#include "SDL2/SDL.h"
#include "z_screen.h"

class Z_MainMenuScreen : public Z_Screen {
    private:
        SDL_Texture* backgroundTex;
    public:
        Z_MainMenuScreen(SDL_Renderer* renderer);
        void Render();
};

#endif
