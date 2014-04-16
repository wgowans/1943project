/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
GraphElement.cpp
	Implementation of GraphElement class (store location and sprites of graphic element)
History
	03/31/14	Bill Gowans		Create
	04/09/14	Jon Richelsen	Standardize
*/

#include "Player.h"
#include <string>
#include <vector>
#include "SDL/SDL.h"
#include "GraphElement.h"

Player::Player(double xP, double yP) : GraphElement(xP, yP) {
	
	xVel = 0;
	yVel = 0;

	SDL_Rect rect_plyr_hlthy_fRollLeft; //sprite of healthy player full roll left
	rect_plyr_hlthy_fRollLeft.x = 15;
	rect_plyr_hlthy_fRollLeft.y = 28;
	rect_plyr_hlthy_fRollLeft.w = 16;
	rect_plyr_hlthy_fRollLeft.h = 16;
	
	SDL_Rect rect_plyr_hlthy_hRollLeft; //sprite of healthy player half roll left
	rect_plyr_hlthy_hRollLeft.x = 38;
	rect_plyr_hlthy_hRollLeft.y = 28;
	rect_plyr_hlthy_hRollLeft.w = 20;
	rect_plyr_hlthy_hRollLeft.h = 16;

	
	SDL_Rect rect_plyr_hlthy_straight; //sprite of healthy player straight
	rect_plyr_hlthy_straight.x = 65;
	rect_plyr_hlthy_straight.y = 28;
	rect_plyr_hlthy_straight.w = 24;
	rect_plyr_hlthy_straight.h = 16;
	
	SDL_Rect rect_plyr_hlthy_hRollRight; //sprite of healthy player half roll right
	rect_plyr_hlthy_hRollRight.x = 96;
	rect_plyr_hlthy_hRollRight.y = 28;
	rect_plyr_hlthy_hRollRight.w = 20;
	rect_plyr_hlthy_hRollRight.h = 16;
	
	SDL_Rect rect_plyr_hlthy_fRollRight; //sprite of healthy player full roll right
	rect_plyr_hlthy_fRollRight.x = 123;
	rect_plyr_hlthy_fRollRight.y = 28;
	rect_plyr_hlthy_fRollRight.w = 16;
	rect_plyr_hlthy_fRollRight.h = 16;
	
	SDL_Rect rect_plyr_dmgd_fRollLeft; //sprite of damaged player full roll left
	rect_plyr_dmgd_fRollLeft.x = 14;
	rect_plyr_dmgd_fRollLeft.y = 82;
	rect_plyr_dmgd_fRollLeft.w = 16;
	rect_plyr_dmgd_fRollLeft.h = 16;
	
	SDL_Rect rect_plyr_dmgd_hRollLeft; //sprite of damaged player half roll left
	rect_plyr_dmgd_hRollLeft.x = 37;
	rect_plyr_dmgd_hRollLeft.y = 82;
	rect_plyr_dmgd_hRollLeft.w = 20;
	rect_plyr_dmgd_hRollLeft.h = 16;

	SDL_Rect rect_plyr_dmgd_straight; //sprite of damaged player straight
	rect_plyr_dmgd_straight.x = 64;
	rect_plyr_dmgd_straight.y = 82;
	rect_plyr_dmgd_straight.w = 24;
	rect_plyr_dmgd_straight.h = 16;

	SDL_Rect rect_plyr_dmgd_hRollRight; //sprite of damaged player half roll right
	rect_plyr_dmgd_hRollRight.x = 95;
	rect_plyr_dmgd_hRollRight.y = 82;
	rect_plyr_dmgd_hRollRight.w = 20;
	rect_plyr_dmgd_hRollRight.h = 16;

	SDL_Rect rect_plyr_dmgd_fRollRight; //sprite of damaged player full roll right
	rect_plyr_dmgd_fRollRight.x = 122;
	rect_plyr_dmgd_fRollRight.y = 82;
	rect_plyr_dmgd_fRollRight.w = 16;
	rect_plyr_dmgd_fRollRight.h = 16;
	
	addSprite("plyr_hlthy_fRollLeft",	rect_plyr_hlthy_fRollLeft);
	addSprite("plyr_hlthy_hRollLeft",	rect_plyr_hlthy_hRollLeft);
	addSprite("plyr_hlthy_straight",	rect_plyr_hlthy_straight);
	addSprite("plyr_hlthy_hRollRight",	rect_plyr_hlthy_hRollRight);
	addSprite("plyr_hlthy_fRollRight",	rect_plyr_hlthy_fRollRight);
	addSprite("plyr_dmgd_fRollLeft",	rect_plyr_dmgd_fRollLeft);
	addSprite("plyr_dmgd_hRollLeft",	rect_plyr_dmgd_hRollLeft);
	addSprite("plyr_dmgd_straight",		rect_plyr_dmgd_straight);
	addSprite("plyr_dmgd_hRollRight",	rect_plyr_dmgd_hRollRight);
	addSprite("plyr_dmgd_fRollRight",	rect_plyr_dmgd_fRollRight);
	/* addSprite("plyr_intr_1",			rect_plyr_intr_1);
	addSprite("plyr_intr_2",			rect_plyr_intr_2);
	addSprite("plyr_intr_3",			rect_plyr_intr_3);
	addSprite("plyr_intr_4",			rect_plyr_intr_4);
	addSprite("plyr_intr_5",			rect_plyr_intr_5);
	addSprite("plyr_intr_6",			rect_plyr_intr_6);
	addSprite("plyr_intr_7",			rect_plyr_intr_7); */
}

SDL_Rect Player::getSprite() {
	int i = 0;
	std::string targetString;
	if (getXVel() < 0) targetString = "plyr_hlthy_fRollLeft";
	else if (getXVel() > 0) targetString = "plyr_hlthy_fRollRight";
	else targetString = "plyr_hlthy_straight";
	while (i < sprites.size()){
		if (sprites[i].name == targetString){
			return sprites[i].clip;
		}
		i++;
	}
	return sprites[2].clip;
}

void Player::setYVel(double yv){
	yVel = yv;
}

void Player::setXVel(double xv){
        xVel = xv;
}

double Player::getXVel(){
	return xVel;
}

double Player::getYVel(){
	return yVel;
}
