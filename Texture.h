#ifndef _TEXTURE_H_
#define _TEXTURE_H_
#endif

#include <SDL.h>

class Texture {

public:
	Texture(int x, int y, int h, int w, int textureId);
	int id;
	SDL_Texture *texture;
	SDL_Rect rect;
};
