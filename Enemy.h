/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Enemy.h
	Interface of Enemy class (base class for derived enemy classes)
History
	03/31/14	Bill Gowans		Create, declare default constructor, forward(), slightR(), sharpR(), slightL(), sharpR(), getX(), getY(), getXVel(), getYVel(), and private variable healthCntr
	04/16/14	Jon Richelsen	Standardize
To Do
	Completely revamp class
*/
#ifndef ENEMY_H
#define ENEMY_H

#include<string>
#include"Counter.h"
#include"Sprite.h"

class Enemy {
	public:
		Player ();
		Sprite forward(string, string);
		Sprite slightR(string, int, int);
		Sprite sharpR(string, int, int);
		Sprite slightL(string, int, int);
		Sprite sharpR(string, int, int);
		int getX();
		int getY();
		int getXVel();
		int getYVel();		
	private:
		Counter healthCntr;
};

#endif //ENEMY_H
