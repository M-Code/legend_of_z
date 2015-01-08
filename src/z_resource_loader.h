#ifndef Z_SDL_RESOURCE_LOADER_H
#define Z_SDL_RESOURCE_LOADER_H

#include "z_sdl.h"

class Z_ResourceLoader {
    public:
        TTF_Font*    LoadTTFFont(const char* fontFile, int ptSize);
        SDL_Texture* LoadTextTexture(SDL_Renderer* renderer, TTF_Font* font, const char* text, SDL_Color fg);
        SDL_Texture* LoadBMPTexture(SDL_Renderer* renderer, const char* bmpFile);

        static Z_ResourceLoader* Z_GetInstance(void);
    private:
        Z_ResourceLoader(void);
        ~Z_ResourceLoader(void); 
};


#endif
