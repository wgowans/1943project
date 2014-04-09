/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Sprite.cpp
	Implementation of Sprite class (blit sprite to screen at specified location)
History
	03/31/14	Bill Gowans		Create
	04/08/14	Jon Richelsen	Standardize
	04/08/14	Jon Richelsen	Write nondefault constructor, blit(), getWidth(), and getHeight()
To Do
	Replace key{RGB} "cout" statement with exception
*/
#include"Sprite.h"
#include<iostream>
#include<string>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"

Sprite::Sprite(std::string iF, SDL_Rect c, int kR = -1, kG = -1, kB = -1) { //nondefault constructor [clip, imageFile]
	clip = c;
	imageFile = iF;
	keyR = kR;
	keyG = kG;
	keyB = kB;
	surface = NULL;
	
	
	//evaluate key{RGB} values
	int doKey;
	if((keyR == -1) && (keyG == -1) && (keyB == -1)) { //if no key{RGB} values were entered,
		doKey = 0; //do not key sprite
	}
	else if((keyG == -1) || (keyB == -1)) { //else if one or two key{RGB} values entered,
		cout << "Error: Error generating sprite (only one or two key{RGB} values entered)\n"
		return 0;
	}
	else if((keyR < 0) || (keyR > 255) || (keyG < 0) || (keyG > 255) || (keyB < 0) || (keyB > 255)) { //else if one or more key{RGB} is out of range,
		cout << "Error: Error generating sprite (one or more key{RGB} is out of range)\n"
		return 0;
	}
	else {
		doKey = 1;
	}
	
	
	//load image
	SDL_Surface * loadedImage = NULL; //temporary storage for loaded image
	
	loadedImage = IMG_Load(imageFile.c_str()); //load "imageFile
	
	if(loadedImage) { //if image loads correctly,
		surface = SDL_DisplayFormat(loadedImage); //create optimized image
		SDL_FreeSurface(loadedImage); //free old image
		if(surface && doKey) { //if image optimized correctly and keying is desired,
			Uint32 colorkey = SDL_MapRGB(surface->format, keyR, keyG, keyB); //map color key
			
			//set all pixels of color R-keyR, G-keyG, B-keyB, to be transparent
			SDL_SetColorKey(surface, SDL_SRCCOLORKEY, colorkey);
		}
	}
}

void Sprite::blit(int xPos, int yPos) { //blit sprite to "background" [xPos, yPos]
	SDL_Rect offset; //temporary SDL_Rect struct to hold offsets
	
	//give offsets to rectangle
	offset.x = xPos;
	offset.y = yPos;
	
	//blit surface
	SDL_BlitSurface(surface, clip, background, &offset);
}

int getWidth() {
	return clip.w;
}

int getHeight() {
	return clip.h;
}
