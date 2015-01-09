#include "z_util.h"
#include "z_resource_loader.h"

void Z_RenderNewTextAt(int x, int y, const char* text, TTF_Font* font, SDL_Color color, SDL_Renderer* renderer) {
    SDL_Rect rect = { x, y }; // == { x, y, _, _} (To save a tiny bit of assign time :p )
    SDL_Texture* texture = Z_ResourceLoader::GetInstance()->LoadTextTexture(renderer, font, text, color);
    
    SDL_QueryTexture(texture, NULL, NULL, &rect.w, &rect.h);
    SDL_RenderCopy(renderer, texture, NULL, &rect);

    SDL_DestroyTexture(texture);
}
