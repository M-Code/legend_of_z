#ifndef Z_UTIL_H
#define Z_UTIL_H
#include <SDL2/SDL.h>
#include <SDL2_ttf/SDL_ttf.h>

/*
 Render a new text at a specific location to the size of the font.
*/
void Z_RenderNewTextAt(int x, int y, const char* text, TTF_Font* font, SDL_Color color, SDL_Renderer* renderer);
//void Z_RenderTextAt(int x, int y, const char* text, TTF_Font* font, SDL_Color color, SDL_Renderer* renderer);

#endif
