#include <stdio.h>
#include "TextureManager.h"

#ifdef main
#undef main
#endif

SDL_Window *g_window = NULL;

SDL_Renderer *g_renderer = NULL;

SDL_Texture *g_t1 = NULL;
SDL_Texture *g_t2 = NULL;

void CreateWindow()
{
	g_window = SDL_CreateWindow("Katamari Damacy Clone", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 500, 500, SDL_WINDOW_RESIZABLE);
}

void InitRenderer()
{
	g_renderer = SDL_CreateRenderer(g_window, -1, SDL_RENDERER_ACCELERATED);
}

void Render()
{
	SDL_RenderClear(g_renderer);

	SDL_Rect rect1;
	rect1.h = 50;
	rect1.w = 50;
	rect1.x = 50;
	rect1.y = 50;

	SDL_SetRenderDrawColor(g_renderer, 255, 0, 0, 0);

	SDL_RenderFillRect(g_renderer, &rect1);

	SDL_SetRenderDrawColor(g_renderer, 0, 0, 0, 0);
	SDL_RenderPresent(g_renderer);
}

int main(int argc, char *argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	CreateWindow();
	InitRenderer();
	TextureManager *manager = TextureManager::GetTextureManager();
	SDL_ShowWindow(g_window);
	Render();

	SDL_Delay(5000);
	return 0;
}