#include "TextureManager.h"

TextureManager* TextureManager::instance = NULL;

TextureManager *TextureManager::GetTextureManager()
{
	if (instance == NULL)
	{
		instance = new TextureManager();
		return instance;
	}
	else
	{
		return instance;
	}
}