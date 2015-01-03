/* 
*********************************
Main entry point to Lengend Of Z.
*********************************

This is an attempt to create a Legend of Zelda clone. 
*/

#include <SDL2/SDL.h>

bool running = true;
int main() {
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window* mainWindow = SDL_CreateWindow("Legend of Z", 
                                                SDL_WINDOWPOS_CENTERED,
                                                SDL_WINDOWPOS_CENTERED, 
                                                640, 480, 
                                                0);
    SDL_Event event;
    
    while (running) {
        if (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    running = false;
                    break;
            }

        }

    }
    SDL_DestroyWindow(mainWindow);
    SDL_Quit();
    
    return 0;
}
