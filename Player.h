/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Player.h
	Interface of Player class (coordinate movement and sprites of player's plane)
History
	03/31/14	Bill Gowans		Create, declare constructor, Sprite(), scoreCntr(), healthCntr(), ammoCntr(), livesCntr(), getX(), getY(), getXVel(), getYVel, and private variables x_vel and y_vel
	04/09/14	Jon Richelsen	Start standardization
	04/22/14 Jon Richelsen	Finish standardization, define weaponType enum
To Do
	Decide where to put weaponType enum
*/
#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include<vector>
#include"SDL/SDL.h"
#include "GraphElement.h"

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
		weaponType weapon;
//		Counter ammoCntr (int);
//		Counter healthCntr (int);
		
};

#endif //PLAYER_H
