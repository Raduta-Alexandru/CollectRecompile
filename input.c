#include "declaration.h"

void input(){
    action = 0;
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            running = 0;
        }
        if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
                case SDLK_ESCAPE:
                    running = 0;
                    break;
                case SDLK_1:
                    isInLevel = 1;
                    break;
                case SDLK_2:
                    isInLevel = 0;
                    break;
                case SDLK_EQUALS:
                    playerJump += 5;
                    break;
                case SDLK_MINUS:
                    if (playerJump > 5) {
                        playerJump -= 5;
                    }
                    break;
            }
        }
    }
}