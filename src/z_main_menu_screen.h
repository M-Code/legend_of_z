#ifndef Z_MAIN_MENU_SCREEN
#define Z_MAIN_MENU_SCREEN

#include "z_sdl.h"
#include <vector>
#include <string>
#include "z_screen.h"
#include "z_joystick_manager.h"

class Z_MainMenuScreen : public Z_Screen {
    private:
        TTF_Font*    titleFont;
        SDL_Color    titleFontColor; 
        
        TTF_Font*    menuFont;
        SDL_Color    menuFontColor;  
        SDL_Color    menuSelectedFontColor; 
        SDL_Texture* backgroundTex;

        std::vector<std::string> menuItems;
        int menuSelected;
    public:
        Z_MainMenuScreen( SDL_Renderer* renderer, Z_JoystickManager* joystickManager );
        void Render( void );
        void Update( void );
};

#endif
