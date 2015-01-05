#ifndef Z_SCREEN_H
#define Z_SCREEN_H

#include "SDL2/SDL.h"
#include "z_texture_loader.h"

class Z_Screen {
    protected:
        Z_TextureLoader* texLoader;
    public:
        Z_Screen(void);
        virtual void Render(SDL_Renderer* renderer) = 0;
};

#endif
