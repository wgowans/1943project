/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Powerup.h
	Interface of Powerup class (coordinate movement, type, and sprite of powerup)
History
	04/22/14 Jon Richelsen	Create, copying everything from player, remove get[XY]Vel() and private variables [xy]Vel, rename spriteType to powerupSpriteType, fix typos
	04/23/14	Jon Richelsen	Declare getPower() and private variable power
To Do
*/
#ifndef POWERUP_H
#define POWERUP_H

#include"SDL/SDL.h"
#include"GraphElement.h"

typedef enum {
	SPR_PWRUP_POW,
	SPR_PWRUP_SPRD,
	SPR_PWRUP_MSSL,
	SPR_PWRUP_BEAM,
	SPR_PWRUP_AUTO,
	SPR_PWRUP_COW
} powerupSpriteType;

typedef enum {
			POW,
			SPREAD,
			MISSILE,
			BEAM,
			AUTO,
			COW
} powerType;

class Powerup : public GraphElement{
	public:
		Powerup(double, double, powerType); //nondefault constructor, passes position to GraphElement constructor [xPos, yPos, power]
		SDL_Rect getSprite();
		powerType getPower();
	private:
		powerupSpriteType sprite; //enum that stores powerup's sprite
		powerType power; //enum that stores powerup's power		
};

#endif //POWERUP_H
