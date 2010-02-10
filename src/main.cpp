#include "SDL.h"

int main(int argc, char* argv[]) {
  SDL_Surface* screen = NULL;
  SDL_Init(SDL_INIT_EVERYTHING);

  // screen setup
  screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
  
  SDL_Delay(3000);
  
  SDL_Quit();
  return 0;
}
