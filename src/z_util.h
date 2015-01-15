#ifndef Z_UTIL_H
#define Z_UTIL_H

#include "z_sdl.h"

/*
 Render a new text at a specific location to the size of the font.
*/
void Z_RenderNewTextAt( int x, int y, const char* text, TTF_Font* font, SDL_Color color, SDL_Renderer* renderer );
void Z_RenderNewTextAround( float x, float y, const char* text, TTF_Font* font, SDL_Color color, SDL_Renderer* renderer );

void Z_RenderTextAt( int x, int y, const char* text, TTF_Font* font, SDL_Color color, SDL_Renderer* renderer );
void Z_RenderTextAround( float x, float y, const char* text, TTF_Font* font, SDL_Color color, SDL_Renderer* renderer );

void Z_RenderTextureAt( int x, int y, SDL_Texture* texture, SDL_Renderer* renderer );
void Z_RenderTextureAround( float x, float y, SDL_Texture* texture, SDL_Renderer* renderer );

int Z_GetScreenWidth ( void );
int Z_GetScreenHeight ( void );
#endif
