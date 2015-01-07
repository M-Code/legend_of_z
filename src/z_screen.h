#ifndef Z_SCREEN_H
#define Z_SCREEN_H

#include <SDL2/SDL.h>

class Z_Screen {
    protected:
        SDL_Renderer*     renderer;
    public:
        Z_Screen(SDL_Renderer* renderer);
        virtual void Render() = 0; // Virtual functions also needs to be implemented, unlike Java.
}; 

#endif
