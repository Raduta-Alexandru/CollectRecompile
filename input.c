#include "declaration.h"

void input(){
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
                case SDLK_0:
                    test = 0;
                    break;
                case SDLK_1:
                    test = 1;
                    break;
                case SDLK_2:
                    test = 2;
                    break;
                case SDLK_3:
                    test = 3;
                    break;
            }
        }
    }
}