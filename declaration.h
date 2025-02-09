#ifndef declarations
#define declarations

// main library for game
#include <SDL2/SDL.h>

// variables for the screen, renderer and the boolean that
// knows if the game is running or it needs to be stopped
extern SDL_Window *screen;
extern SDL_Renderer *renderer;
extern char running;
extern int maxFrameRate;
extern int test;

// action functions declaration

int firstFrame(int length, int height); // used for the first frame
void input(); // take the input from the user
void gameLogic(); // what needs to happen
void frameGeneration(); // render the frame
void gameStopped(); // clean up after yourself, or else the pc will explode :)

#endif