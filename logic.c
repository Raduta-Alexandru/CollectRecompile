#include "declaration.h"

void gameLogic() {
    // game logic will be added here when needed
    if (action) {
    // if an action other than movement takes place
    }
    // just the movement, to get it smooth
    const Uint8 *keys = SDL_GetKeyboardState(NULL);
    if (keys[SDL_SCANCODE_W]) {
        playerPosY -= playerMoveY;
    }
    if (keys[SDL_SCANCODE_A]) {
        playerPosX -= playerMoveX;
    }
    if (keys[SDL_SCANCODE_S]) {
        playerPosY += playerMoveY;
    }
    if (keys[SDL_SCANCODE_D]) {
        playerPosX += playerMoveX;
    }
}