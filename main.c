#include "declaration.h"

int main(int argc, char* argv[]) {
    if (argc == 3) {
        // if the input params are the screen size
        screenLength = atoi(argv[1]);
        screenHeight = atoi(argv[2]);
    }
    if(firstFrame(screenLength, screenHeight) != 0) {
        return 1; // close the game if by any reason the
                  // game generation did not work
    }

    while(running) {
        input();
        gameLogic();
        frameGeneration();
        SDL_Delay(maxFrameRate);
    }

    gameStopped();
    return 0;
}