#include "Texture.h"

Texture::Texture(int x, int y, int h, int w, int textureId)
{

	// Assign each member it's value
	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = h;
	
	id = textureId;

}