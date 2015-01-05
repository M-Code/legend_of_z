#include "z_main_menu_screen.h"

#include "SDL2/SDL.h"
#include "z_resource.h"

void Z_MainMenuScreen::Render(SDL_Renderer* renderer) {
    SDL_Texture* backgroundTex = texLoader->LoadTexture(renderer,  Z_MAIN_BACKGROUND);
    SDL_RenderCopy(renderer, backgroundTex, NULL, NULL);

    SDL_DestroyTexture(backgroundTex);
}
