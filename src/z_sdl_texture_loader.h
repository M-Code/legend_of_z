#ifndef Z_SDL_TEXTURE_LOADER_H
#define Z_SDL_TEXTURE_LOADER_H

#include <SDL2/SDL.h>

class Z_SDLTextureLoader {
    public:
    SDL_Texture* LoadTexture(SDL_Renderer* renderer, const char* bmpFile);
};


#endif
