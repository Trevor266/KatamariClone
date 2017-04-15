#include <stdio.h>
#include <SDL.h>

#ifdef main
#undef main
#endif

int main(int argc, char *argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	return 0;
}