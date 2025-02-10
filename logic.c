#include "declaration.h"

int playerTouchesGround() {
    if ((playerPosY + playerHeight) >=  screenHeight) {
        return 1;
    } else {
        return 0;
    }
}

void levelLogic() {
    // game logic will be added here when needed
    if (action) {
        // if an action other than movement takes place
    }
    // just the movement, to get it smooth
    const Uint8 *keys = SDL_GetKeyboardState(NULL);
    char playerJumped = 0;
    if (keys[SDL_SCANCODE_W]) {
        if (playerTouchesGround() == 1) {
            // the player can jump
            playerVelocity += playerJump;
            playerJumped = 1;
        }
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
    // running gravity
    if ((playerTouchesGround() == 0) || (playerJumped == 1)) {
        if (playerVelocity  > gravityConst) {
            playerVelocity += gravityConst * 0.2;
        }
        playerPosY -= playerVelocity;
    } else {
        playerVelocity = 0;
        playerPosY = screenHeight - playerHeight;
    }
}

void worldLogic() {
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

void gameLogic() {
    // check if the player is in the world or in the level
    if(isInLevel) {
        levelLogic();
    } else {
        worldLogic();
    }
}