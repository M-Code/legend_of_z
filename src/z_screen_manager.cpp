#include "z_screen_manager.h"
#include "z_main_menu_screen.h"
#include "z_game_screen.h"

Z_ScreenManager::Z_ScreenManager(SDL_Renderer* renderer) {
    mainMenuScreen = new Z_MainMenuScreen(renderer);
    gameScreen = new Z_GameScreen(renderer);
    currentScreen = mainMenuScreen;
}

Z_Screen* Z_ScreenManager::GetCurrentScreen(void) {
    return currentScreen;
}

void Z_ScreenManager::SetMainMenuScreen(void) {
    currentScreen = mainMenuScreen;
}
void Z_ScreenManager::SetLoadGameScreen(void) {
    currentScreen = loadGameScreen;
}
void Z_ScreenManager::SetAboutScreen(void) {
    currentScreen = aboutScreen;
}
void Z_ScreenManager::SetGameScreen(void) {
    currentScreen = gameScreen;
}

