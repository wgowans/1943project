/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Powerup.h
	Interface of Powerup class (coordinate movement, type, and sprite of powerup)
History
	04/22/14 Jon Richelsen	Create, copying everything from player
To Do
*/
#ifndef POWERUP_H
#define POWERUP_H

#include"SDL/SDL.h"
#include"GraphElement.h"

typedef enum {
	RECT_PWRUP_POW,
	RECT_PWRUP_SPRD,
	RECT_PWRUP_MSSL,
	RECT_PWRUP_BEAM,
	RECT_PWRUP_AUTO,
	RECT_PWRUP_COW
} spriteType;

typedef enum {
			STANDARD,
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
		double getXVel();
		double getYVel();
		void setXVel(double);
		void setYVel(double);
	private:
		double xVel;
		double yVel;
		spriteType sprite; //enum that stores powerup's sprite
		powerType power; //enum that stores powerup's power		
};

#endif //POWERUP_H
