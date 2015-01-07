/* 
*********************************
Main entry point to Lengend Of Z.
*********************************

This is an attempt to create a Legend of Zelda clone. 

**Legend of Z Code Convention**:
Function without parameters should explicitly have a "void" parameter type.

All Legend of Z functions have a "Z_" prefix.
All Legend of Z source files have a "z_" prefix.
All Legend of Z class names have a "Z_" prefix.

Class declaration starts with public then protected, then private.

*/

/* Includes */
#include <SDL2/SDL.h>
#include <SDL2_ttf/SDL_ttf.h>

#include "z_resource.h"
#include "z_screen_manager.h"
/* End of Includes */

/* Global Variables */
bool running;
SDL_Window*       mainWindow;
Z_ScreenManager*  screenManager;

SDL_Renderer*     renderer;

SDL_Surface*      backgroundSurface = NULL;

long framesRendered;
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
    TTF_Init();
    SDL_LogInfo(SDL_LOG_CATEGORY_APPLICATION, "Creating main window..");

    mainWindow = SDL_CreateWindow("Legend of Z",
                                  SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED, 
                                  1024, 768, 
                                  SDL_WINDOW_FULLSCREEN );

    renderer = SDL_CreateRenderer(mainWindow, -1, SDL_RENDERER_ACCELERATED);
    
    running = true;
    screenManager = new Z_ScreenManager(renderer);

    framesRendered = 0;
}

// Release all reosources.
void Z_Destroy(void) {
    SDL_DestroyWindow(mainWindow);
    SDL_Quit();
    TTF_Quit();
}

// Update game state.
void Z_UpdateGame(void) {
}

void Z_RenderGame(void) {
    screenManager->GetCurrentScreen()->Render();
    SDL_RenderPresent(renderer);

    framesRendered++;
}

void Z_RenderFPSInfo(void) {
}

int main(void) {
    Z_Init();
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
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

        SDL_Delay(10);

        Z_UpdateGame();
        Z_RenderGame();
        Z_RenderFPSInfo();
    }

    Z_Destroy();   
    return 0;
}
