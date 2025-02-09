#include "declaration.h"

int firstFrame(int length, int height) {

    // create the screen
    screen = SDL_CreateWindow("C&R", SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED, length, height, SDL_WINDOW_SHOWN);
    
    // check the window was created
    if(screen == NULL) {
        SDL_Quit();
        return 1;
    }

    // create the renderer
    renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_ACCELERATED);

    // check the renderer was created
    if(renderer == NULL) {
        SDL_DestroyWindow(screen);
        SDL_Quit();
        return 1;
    }

    running = 1;
    test = 0;
    return 0;
}