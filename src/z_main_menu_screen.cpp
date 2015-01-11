#include "z_main_menu_screen.h"

#include "z_resource_loader.h"
#include "z_resource.h"
#include "z_util.h"

Z_MainMenuScreen::Z_MainMenuScreen( SDL_Renderer* renderer, Z_JoystickManager* joystickManager) : Z_Screen(renderer, joystickManager ) {
    titleFont = Z_ResourceLoader::GetInstance()->LoadTTFFont( Z_TITLE_FONT_TYPE, Z_TITLE_FONT_SIZE );

    titleFontColor = Z_TITLE_FONT_COLOR; 

    backgroundTex = Z_ResourceLoader::GetInstance()->LoadBMPTexture( renderer, Z_MAIN_BACKGROUND );
}
bool show = false;
void Z_MainMenuScreen::Render( void ) {
    SDL_RenderCopy( renderer, backgroundTex, NULL, NULL );
    if ( show ) 
        Z_RenderNewTextAt( 100, 200, Z_TITLE_STRING, titleFont, titleFontColor, renderer );   
}

void Z_MainMenuScreen::Update( void ) {
    show = joystickManager->IsPressed( Z_BUTTON_Y );
}
