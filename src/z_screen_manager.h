#ifndef Z_SCREEN_MANAGER_H
#define Z_SCREEN_MANAGER_H

#include "z_screen.h"

class Z_ScreenManager {
    private:
        Z_Screen* currentScreen;
        Z_Screen* mainMenuScreen;
        Z_Screen* loadGameScreen;
        Z_Screen* saveGameScreen;
        Z_Screen* aboutScreen;
        Z_Screen* gameScreen;
        
    public:
        Z_ScreenManager(void);
        Z_Screen* GetCurrentScreen(void);
        void SetCurrentScreen(void);
};

#endif
