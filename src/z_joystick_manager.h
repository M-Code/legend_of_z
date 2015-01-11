#ifndef Z_JOYSTICK_MANAGER_H
#define Z_JOYSTICK_MANAGER_H

#include "z_sdl.h"
#include "z_button_mappings.h"

class Z_JoystickManager {
    public:
        Z_JoystickManager( void );
        void ProcessSDLEvent( SDL_Event* event );

        bool IsPressedMoreThan( Uint32 button, Uint32 ticks );
        bool IsPressed( Uint32 button );
    
        bool IsDown( void );
        bool IsDownMoreThan( Uint32 ticks );
        bool IsUp( void );
        bool IsUpMoreThan( Uint32 ticks );
        bool IsLeft( void );
        bool IsLeftMoreThan( Uint32 ticks );
        bool IsRight( void );
        bool IsRightMoreThan( Uint32 ticks );
 
    private:
        SDL_Joystick* joystick;
};


#endif
