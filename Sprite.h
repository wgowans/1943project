/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Sprite.h
	Interface of Sprite class (blit sprite to screen at specified location)
History
	XX/XX/XX	Person's name	Summary of edits made
	XX/XX/XX	Person's name	Summary of edits made
To Do
	To do item 1
	To do item 2
BUT SERIOUSLY, THE ACTUAL HISTORY OF THIS TEMPLATE FILE
	04/01/14	Jon Richelsen	Create file
	04/02/14	Jon Richelsen	Add "To Do" section
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

#endif
