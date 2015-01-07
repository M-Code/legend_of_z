#include "z_resource_loader.h"

Z_ResourceLoader::Z_ResourceLoader(void) {
}
Z_ResourceLoader::~Z_ResourceLoader(void) {
    // TODO: Implement clean up code.
}

Z_ResourceLoader* Z_ResourceLoader::Z_GetInstance(void) {
    return 0;
}
TTF_Font* Z_ResourceLoader::LoadTTFFont(const char* fontFile, int ptSize) {
    TTF_Font* font = TTF_OpenFont(fontFile, ptSize);
    return font;
}

SDL_Texture* Z_ResourceLoader::LoadTextTexture(SDL_Renderer* renderer, TTF_Font* font, const char* text, SDL_Color fg) {
   SDL_Surface* surface = TTF_RenderText_Solid(font, text, fg);
   SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
   SDL_FreeSurface(surface);
   return texture;
}

SDL_Texture* Z_ResourceLoader::LoadBMPTexture(SDL_Renderer* renderer, const char* bmpFile) {
    SDL_Surface* surface = SDL_LoadBMP(bmpFile);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}
