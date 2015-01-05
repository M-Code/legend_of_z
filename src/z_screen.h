#ifndef Z_SCREEN_H
#define Z_SCREEN_H

#include "SDL2/SDL.h"
#include "z_texture_loader.h"

class Z_Screen {
    protected:
        SDL_Renderer*    renderer;
        Z_TextureLoader* texLoader;
    public:
        Z_Screen(SDL_Renderer* renderer);
        virtual void Render() = 0;
}; 

#endif
