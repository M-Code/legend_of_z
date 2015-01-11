#include "z_screen.h"

Z_Screen::Z_Screen( SDL_Renderer* renderer, Z_JoystickManager* joystickManager) {
    this->renderer = renderer;
    this->joystickManager = joystickManager;
}
