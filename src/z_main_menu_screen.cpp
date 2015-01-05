#include "z_main_menu_screen.h"

#include "SDL2/SDL.h"
#include "z_resource.h"

Z_MainMenuScreen::Z_MainMenuScreen(SDL_Renderer* renderer) : Z_Screen(renderer) {
    backgroundTex = texLoader->LoadTexture(renderer, Z_MAIN_BACKGROUND);
}

void Z_MainMenuScreen::Render() {
    SDL_RenderCopy(this->renderer, backgroundTex, NULL, NULL);

    SDL_DestroyTexture(backgroundTex);
}
