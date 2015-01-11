#ifndef Z_SCREEN_MANAGER_H
#define Z_SCREEN_MANAGER_H

#include "SDL2/SDL.h"
#include "z_screen.h"
#include "z_joystick_manager.h"

class Z_ScreenManager {
    private:
        Z_Screen* currentScreen;

        Z_Screen* mainMenuScreen;
        Z_Screen* loadGameScreen;
        Z_Screen* aboutScreen;
        Z_Screen* gameScreen;
        
    public:
        Z_ScreenManager(SDL_Renderer* renderer, Z_JoystickManager* joystickManager);
        Z_Screen* GetCurrentScreen(void);
        void SetMainMenuScreen(void);
        void SetLoadGameScreen(void);
        void SetAboutScreen(void);
        void SetGameScreen(void);
};

#endif
