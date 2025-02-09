#include "declaration.h"

int main(int argc, char* argv[]) {
    // I dont know why I added arguments, maybe i will
    // implement some options later but I'm not sure
    int length = 800;
    int height = 600;
    if(firstFrame(length, height) != 0) {
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