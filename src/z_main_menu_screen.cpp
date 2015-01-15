#include "z_main_menu_screen.h"

#include "z_resource_loader.h"
#include "z_resource.h"
#include "z_util.h"
#include "z_event_queue.h"

Z_MainMenuScreen::Z_MainMenuScreen( SDL_Renderer* renderer, Z_JoystickManager* joystickManager) : Z_Screen(renderer, joystickManager ) {
    menuSelected = 0;
    menuItems.push_back( Z_MENU_NEWGAME_STRING );
    menuItems.push_back( Z_MENU_LOADGAME_STRING );
    menuItems.push_back( Z_MENU_ABOUT_STRING );
    menuItems.push_back( Z_MENU_QUIT_STRING );

    titleFont = Z_ResourceLoader::GetInstance()->LoadTTFFont( Z_TITLE_FONT_TYPE, Z_TITLE_FONT_SIZE );
    titleFontColor = Z_TITLE_FONT_COLOR; 
    
    menuFont = Z_ResourceLoader::GetInstance()->LoadTTFFont( Z_MENU_FONT_TYPE, Z_MENU_FONT_SIZE );
    menuFontColor = Z_MENU_FONT_COLOR; 
    menuSelectedFontColor = (SDL_Color) { 200, 20, 80, 0 };
    backgroundTex = Z_ResourceLoader::GetInstance()->LoadBMPTexture( renderer, Z_MAIN_BACKGROUND );
}

void Z_MainMenuScreen::Render( void ) {
    SDL_RenderCopy( renderer, backgroundTex, NULL, NULL );
    Z_RenderNewTextAround( 0.5f, 0.2f, Z_TITLE_STRING, titleFont, titleFontColor, renderer );   

    float y = 0.4f;
    for ( int i = 0; i < menuItems.size(); i++ ) {
        Z_RenderNewTextAround( 0.5f, y, menuItems.at( i ).c_str(), menuFont, i == menuSelected ? menuSelectedFontColor : menuFontColor, renderer );
        y += 0.12f;
    }
}

static Uint32 lastDown = 0;
static Uint32 lastUp = 0;
void Z_MainMenuScreen::Update( void ) {
    if ( joystickManager->IsPressed( Z_BUTTON_START ) ) {
        Z_Event* event = new Z_Event;
        event->screenChange.type = Z_ScreenChange;
        event->screenChange.toScreen = Z_Game;
        Z_PushEvent( event );
    }

    if ( joystickManager->IsDown() && SDL_GetTicks() - lastDown > 150 ) {
        menuSelected++;
        menuSelected %= menuItems.size();
        lastDown = SDL_GetTicks();
    } 

    if ( joystickManager->IsUp() && SDL_GetTicks() - lastUp > 150 ) {
        menuSelected--;
        if ( menuSelected < 0 ) {
            menuSelected = menuItems.size() - 1;
        }
        lastUp = SDL_GetTicks();
    }
}
