#include "SDL2-2.0.5/include/SDL.h"
#include "stdafx.h"
#include "Graphics.h"

Graphics::Graphics()
{
	SDL_CreateWindowAndRenderer(640,480,0, &this->_window, &this->_renderer);
	SDL_SetWindowTitle(this->_window, "SpriteGame");
}

Graphics::~Graphics()
{
	SDL_DestroyWindow(this->_window);
}