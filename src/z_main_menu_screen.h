#ifndef Z_MAIN_MENU_SCREEN
#define Z_MAIN_MENU_SCREEN

#include <SDL2/SDL.h>
#include <SDL2_ttf/SDL_ttf.h>
#include "z_screen.h"

class Z_MainMenuScreen : public Z_Screen {
    private:
        TTF_Font*    titleFont;
        SDL_Color    titleFontColor; 
        SDL_Texture* titleTex; 
        
        SDL_Texture* backgroundTex;
    public:
        Z_MainMenuScreen(SDL_Renderer* renderer);
        void Render();
};

#endif
