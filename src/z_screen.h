#ifndef Z_SCREEN_H
#define Z_SCREEN_H

#include "z_sdl.h"

class Z_Screen {
    protected:
        SDL_Renderer* renderer;
    public:
        Z_Screen(SDL_Renderer* renderer);
        virtual void Render() = 0; // This is pure virtual function. 

        //virtual void HandleInput() = 0;
}; 

#endif
