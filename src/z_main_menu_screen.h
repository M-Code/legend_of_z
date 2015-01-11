#ifndef Z_MAIN_MENU_SCREEN
#define Z_MAIN_MENU_SCREEN

#include "z_sdl.h"
#include "z_screen.h"
#include "z_joystick_manager.h"

class Z_MainMenuScreen : public Z_Screen {
    private:
        TTF_Font*    titleFont;
        SDL_Color    titleFontColor; 
        SDL_Texture* titleTex; 
        
        SDL_Texture* backgroundTex;
    public:
        Z_MainMenuScreen(SDL_Renderer* renderer, Z_JoystickManager* joystickManager);
        void Render(void);
        void Update(void);
};

#endif
