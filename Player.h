/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Player.h
	Interface of Player class (coordinate movement and sprites of player's plane)
History
	03/31/14	Bill Gowans		Create, declare constructor, Sprite(), scoreCntr(), healthCntr(), ammoCntr(), livesCntr(), getX(), getY(), getXVel(), getYVel, and private variables x_vel and y_vel
	04/09/14	Jon Richelsen	Standardize, 
To Do
*/

#include<string>
#include<vector>
#include"SDL/SDL.h"

#ifndef PLAYER_H
#define PLAYER_H

#include "GraphElement.h"

class Player : public GraphElement{
	public:
		Player(double, double);
		double xVel;
		double yVel;
		void setXVel(double);
		void setYVel(double);
		double getXVel();
		double getYVel();
		SDL_Rect getSprite();
//		Sprite for (string, string);
//		Sprite slightR (string, int, int);
//		Sprite sharpR (string, int, int);
//		Sprite slightL (string, int, int);
//		Sprite sharpR (string, int, int);
//		Counter scoreCntr (int);
//		Counter healthCntr (int);
//		Counter ammoCntr (int);
//		Counter livesCntr (int);
	private:
};

#endif
