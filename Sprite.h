/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Sprite.h
	Interface of Sprite class (blit sprite to screen at specified location)
History
	03/31/14	Bill Gowans		Create nondefault construtor and blit()
	04/08/14	Jon Richelsen	Standardize
	04/08/14	Jon Richelsen	Fix nondefault constructor, add "get" functions
To Do
*/
#ifndef SPRITE_H
#define SPRITE_H

#include<string>
#include"SDL/SDL.h"

class Sprite {
	public:
		Sprite(std::string, SDL_Rect, int, int, int); //nondefault constructor, loads "clip" region of "imageFile", generates "surface", sets color key from "key{RGB}" values [imageFile, clip, keyR, keyG, keyB]
		void blit(int, int); //blit sprite to "background" [x, y]
		int getWidth();
		int getHeight();
	private:
		SDL_Rect clip;
		static std::string imageFile;
		static int keyR;
		static int keyG;
		static int keyB;
		static SDL_Surface * surface;
};

#endif //SPRITE_H
