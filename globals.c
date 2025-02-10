#include "declaration.h"

SDL_Window *screen = NULL;
SDL_Renderer *renderer = NULL;
int screenLength = 800;
int screenHeight = 600;
char running = 1;
int maxFrameRate = 16;
char action = 0;
int playerInput = 0;
int playerMove = 0;
int playerPosX = 0;
int playerPosY = 0;
int playerMoveX = 2;
int playerMoveY = 2;
int playerHeight = 50;
int playerLength = 50;
char isInLevel = 1;
float playerVelocity = 0;
const float gravityConst = -10;
float playerJump = 20;