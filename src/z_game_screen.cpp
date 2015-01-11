#include "z_game_screen.h"

Z_GameScreen::Z_GameScreen( SDL_Renderer* renderer, Z_JoystickManager* joystickManager ) : Z_Screen( renderer, joystickManager ) {
    //titleFont = Z_ResourceLoader::GetInstance()->LoadTTFFont(Z_TITLE_FONT_TYPE, Z_TITLE_FONT_SIZE);

    //titleFontColor = Z_TITLE_FONT_COLOR; 

    //backgroundTex = Z_ResourceLoader::GetInstance()->LoadBMPTexture(renderer, Z_MAIN_BACKGROUND);
}

void Z_GameScreen::Update( void ) {
}

void Z_GameScreen::Render( void )  {
    SDL_SetRenderDrawColor( renderer, 0, 255, 0, 255 );
    SDL_RenderClear( renderer );
}
