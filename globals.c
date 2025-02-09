#include "declaration.h"

SDL_Window *screen = NULL;
SDL_Renderer *renderer = NULL;
char running = 1;
int maxFrameRate = 16;
char action = 0;
int playerInput = 0;
int playerMove = 0;
int playerPosX = 0;
int playerPosY = 0;
int playerMoveX = 10;
int playerMoveY = 10;