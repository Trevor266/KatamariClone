#ifndef _TEXTUREMANAGER_H_
#define _TEXTUREMANAGER_H_
#endif

#include "Texture.h"

class TextureManager
{

public:
	static TextureManager *GetTextureManager();
	~TextureManager();

private:
	TextureManager() {};
	static TextureManager* instance;

};
