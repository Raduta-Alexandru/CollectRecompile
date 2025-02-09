#include "declaration.h"

void frameGeneration() {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_Rect rect = {100, 200, 50, 50};
    SDL_SetRenderDrawColor(renderer, test * 64, test * 64, test * 64, 255);
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);
}