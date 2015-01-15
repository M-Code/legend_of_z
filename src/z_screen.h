#ifndef Z_SCREEN_H
#define Z_SCREEN_H

#include "z_sdl.h"
#include "z_joystick_manager.h"

class Z_Screen {
    protected:
        SDL_Renderer* renderer;
        Z_JoystickManager* joystickManager; // Only one joystick.  This will be a single player game!
    public:
        Z_Screen( SDL_Renderer* renderer, Z_JoystickManager* joystickManager );
        
        /* Render this screen. */
        virtual void Render() = 0; // This is pure virtual function. 
        /* Update the state of this screen. */
        virtual void Update() = 0; 
}; 

#endif
