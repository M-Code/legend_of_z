#ifndef Z_SCREEN_MANAGER_H
#define Z_SCREEN_MANAGER_H

#include "SDL2/SDL.h"
#include "z_screen.h"
#include "z_joystick_manager.h"

enum Z_ScreenType { // Note: Enums cannot have the same name as any other types!
    Z_MainMenu,
    Z_LoadGame,
    Z_Game,
    Z_About
};

class Z_ScreenManager {
       
    public:
        Z_ScreenManager( SDL_Renderer* renderer, Z_JoystickManager* joystickManager );
        Z_Screen* GetCurrentScreen( void );
        void SetCurrentScreen( Z_ScreenType type );

    private:
        Z_Screen* currentScreen;

        Z_Screen* mainMenuScreen;
        Z_Screen* loadGameScreen;
        Z_Screen* aboutScreen;
        Z_Screen* gameScreen;
 
};

#endif
