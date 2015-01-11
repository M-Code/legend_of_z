#ifndef Z_GAME_SCREEN_H
#define Z_GAME_SCREEN_H

#include "z_screen.h"
#include "z_sdl.h"

class Z_GameScreen : public Z_Screen {
    public:
        Z_GameScreen( SDL_Renderer* renderer, Z_JoystickManager* joystickManager );
        virtual void Render(void);
        virtual void Update(void);
};


#endif
