#include "z_util.h"
#include "z_resource_loader.h"

void Z_RenderNewTextAt(int x, int y, const char* text, TTF_Font* font, SDL_Color color, SDL_Renderer* renderer) {
    SDL_Rect rect = { x, y }; // == { x, y, _, _} (To save a tiny bit of assign time :p )
    SDL_Texture* texture = Z_ResourceLoader::GetInstance()->LoadTextTexture(renderer, font, text, color);
    
    SDL_QueryTexture(texture, NULL, NULL, &rect.w, &rect.h);
    SDL_RenderCopy(renderer, texture, NULL, &rect);
   
    SDL_DestroyTexture(texture);
}

void Z_RenderNewTextAround(float x, float y, const char* text, TTF_Font* font, SDL_Color color, SDL_Renderer* renderer) {

    SDL_Rect rect; 
    SDL_Texture* texture = Z_ResourceLoader::GetInstance()->LoadTextTexture(renderer, font, text, color);
    
    SDL_QueryTexture(texture, NULL, NULL, &rect.w, &rect.h);
    
    rect.x = x * Z_GetScreenWidth() - rect.w / 2;
    rect.y = y * Z_GetScreenHeight() - rect.h / 2;
    SDL_RenderCopy(renderer, texture, NULL, &rect);
   
    SDL_DestroyTexture(texture);

}
int Z_GetScreenWidth ( void ) {
    return 1024;
}

int Z_GetScreenHeight ( void ) {
    return 768;
}

