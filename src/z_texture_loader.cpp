#include "z_texture_loader.h"
#include <SDL2/SDL.h>

SDL_Texture* Z_TextureLoader::LoadTexture(SDL_Renderer* renderer, const char* bmpFile) {
    SDL_Surface* surface = SDL_LoadBMP(bmpFile);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}
