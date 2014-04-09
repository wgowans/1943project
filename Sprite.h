/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Sprite.h
	Interface of Sprite class (blit sprite to screen at specified location)
History
	03/31/14	Bill Gowans		Create
	04/08/14	Jon Richelsen	Standardize
To Do
*/
#ifndef SPRITE_H
#define SPRITE_H

class Sprite {
	public:
		Sprite (string, string);
		void blit(int, int);
	private:
		static char *imageFile;
		SDL_Rect clipRegion;
};

#endif //SPRITE_H
