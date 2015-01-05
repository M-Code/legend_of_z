#include "z_screen_manager.h"
#include "z_main_menu_screen.h"

Z_ScreenManager::Z_ScreenManager(SDL_Renderer* renderer) {
    mainMenuScreen = new Z_MainMenuScreen(renderer);
    currentScreen = mainMenuScreen;
}

Z_Screen* Z_ScreenManager::GetCurrentScreen(void) {
    return currentScreen;
}
