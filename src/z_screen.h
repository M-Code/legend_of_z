#ifndef Z_SCREEN_H
#define Z_SCREEN_H

#include "SDL2/SDL.h"
//#include "z_screen_manager.h"

class Z_Screen {
    private:
        //Z_ScreenManager* screenManager;
    public:
        Z_Screen(void);
        virtual void Render(SDL_Renderer* renderer);
};

#endif
