/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Player.h
	Interface of Player class (coordinate movement and sprites of player's plane)
History
	03/31/14	Bill Gowans		Create, declare constructor, Sprite(), scoreCntr(), healthCntr(), ammoCntr(), livesCntr(), getX(), getY(), getXVel(), getYVel, and private variables x_vel and y_vel
	04/09/14	Jon Richelsen	Start standardization
	04/22/14 Jon Richelsen	Finish standardization, define spriteType and weaponType enums, sprite, and weapon, fix typos
To Do
	Decide where to put spriteType and weaponType enums
*/
#ifndef PLAYER_H
#define PLAYER_H

#include"SDL/SDL.h"
#include"GraphElement.h"

typedef enum {
	SPR_PLYR_HLTHY_FROLLLEFT,
	SPR_PLYR_HLTHY_HROLLLEFT,
	SPR_PLYR_HLTHY_STRAIGHT,
	SPR_PLYR_HLTHY_HROLLRIGHT,
	SPR_PLYR_HLTHY_FROLLRIGHT,
	SPR_PLYR_DMGD_FROLLLEFT,
	SPR_PLYR_DMGD_HROLLLEFT,
	SPR_PLYR_DMGD_STRAIGHT,
	SPR_PLYR_DMGD_HROLLRIGHT,
	SPR_PLYR_DMGD_FROLLRIGHT,
	SPR_PLYR_INTR_1,
	SPR_PLYR_INTR_2,
	SPR_PLYR_INTR_3,
	SPR_PLYR_INTR_4,
	SPR_PLYR_INTR_5,
	SPR_PLYR_INTR_6,
	SPR_PLYR_INTR_7
} spriteType;

typedef enum {
			STANDARD,
			SPREAD,
			MISSILE,
			BEAM,
			AUTO
} weaponType;

class Player : public GraphElement{
	public:
		Player(double, double); //nondefault constructor, passes position to GraphElement constructor [xPos, yPos]
		SDL_Rect getSprite();
		double getXVel();
		double getYVel();
		void setXVel(double);
		void setYVel(double);
	private:
		double xVel;
		double yVel;
		spriteType sprite; //enum that stores player plane's sprite
		weaponType weapon; //enum that stores player plane's current weapon
//		Counter ammoCntr (int);
//		Counter healthCntr (int);
		
};

#endif //PLAYER_H
