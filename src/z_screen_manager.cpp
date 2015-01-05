#include "z_screen_manager.h"
#include "z_main_menu_screen.h"

Z_ScreenManager::Z_ScreenManager(void) {
    mainMenuScreen = new Z_MainMenuScreen();
    currentScreen = mainMenuScreen;
}

Z_Screen* Z_ScreenManager::GetCurrentScreen(void) {
    return currentScreen;
}
