/* 
*********************************
Main entry point to Lengend Of Z.
*********************************

This is an attempt to create a Legend of Zelda clone. 

**Legend of Z Code Convention**:
All Legend of Z functions have a "Z_" prefix.
All Legend of Z source files have a "z_" prefix.
All Legend of Z class names have a "Z_" prefix.

*/

/* Includes */
#include <SDL2/SDL.h>
#include "z_resource.h"
#include "z_sdl_texture_loader.h"
#include "z_screen_manager.h"
/* End of Includes */

/* Global Variables */
bool running;
SDL_Window*      mainWindow;
Z_ScreenManager* screenManager;

Z_SDLTextureLoader* texLoader;
SDL_Texture*        backgroundTex;
SDL_Renderer*       renderer;

SDL_Surface* backgroundSurface = NULL;
/* End of Global Variables */

/* Function Prototypes */
void Z_Init(void);
void Z_Destroy(void);
void Z_UpdateGame(void);
void Z_Render(void);
/* End of Function Prototypes */

// Initialize Legend of Z.
void Z_Init(void) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_LogInfo(SDL_LOG_CATEGORY_APPLICATION, "Creating main window..");

    mainWindow = SDL_CreateWindow("Legend of Z", 
                                                SDL_WINDOWPOS_CENTERED,
                                                SDL_WINDOWPOS_CENTERED, 
                                                640, 480, 
                                                SDL_WINDOW_FULLSCREEN);

    renderer = SDL_CreateRenderer(mainWindow, -1, SDL_RENDERER_ACCELERATED);
    
    running = true;
    texLoader = new Z_SDLTextureLoader();
    backgroundTex = texLoader->LoadTexture(renderer,  Z_MAIN_BACKGROUND);
    
    screenManager = new Z_ScreenManager();
}

// Release all reosources.
void Z_Destroy(void) {
    SDL_DestroyWindow(mainWindow);
    SDL_Quit();
}

// Update game state.
void Z_UpdateGame(void) {

}

void Z_Render(void) {
    screenManager->GetCurrentScreen()->Render(renderer);
    SDL_RenderPresent(renderer);
}

int main(void) {
    try {
    Z_Init();
    SDL_Event event;
    while (running) {
        if (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_KEYDOWN: {
                    const Uint8 *state = SDL_GetKeyboardState(NULL);
                    if (state[SDL_SCANCODE_RETURN]) {
                        running = false;
                    }
                } break;
                case SDL_QUIT: {
                    running = false;
                } break;
            }
        }

        Z_UpdateGame();
        Z_Render();
    }
    } catch (...) {
        SDL_Log("Blew up!");
    }
    Z_Destroy();   
    return 0;
}
