#include "z_joystick_manager.h"

Z_JoystickManager::Z_JoystickManager( void ) {
    joystick = SDL_JoystickOpen( 0 ); // Only 1 joystick.  Single player game!
}

void Z_JoystickManager::ProcessSDLEvent( SDL_Event* event ) {
}

bool Z_JoystickManager::IsPressedMoreThan( Uint32 button, Uint32 ticks ) {
    return false;
}

bool Z_JoystickManager::IsPressed( Uint32 button ) {
    return SDL_JoystickGetButton( joystick, button );
}

bool Z_JoystickManager::IsUp( void ) {
    Sint16 val = SDL_JoystickGetAxis( joystick, 1 );
    return val < -30000;
}

bool Z_JoystickManager::IsDown( void ) {
    return SDL_JoystickGetAxis( joystick, 1 ) > 30000;
}
