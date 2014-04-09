/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
GraphElement.cpp
	Implementation of GraphElement class (store location and sprites of graphic element)
History
	03/31/14	Bill Gowans		Create
	04/09/14	Jon Richelsen	Standardize
To Do
	Finish implementation
	Test
*/

#include"Player.h"
#include<string>
#include<vector>
#include"SDL/SDL.h"
#include"SpriteMappings.h"

Player::Player(int xP, int yP) : GraphElement(xP, yP) {
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
	addSprite("plyr_intr_1",			rect_plyr_intr_1);
	addSprite("plyr_intr_2",			rect_plyr_intr_2);
	addSprite("plyr_intr_3",			rect_plyr_intr_3);
	addSprite("plyr_intr_4",			rect_plyr_intr_4);
	addSprite("plyr_intr_5",			rect_plyr_intr_5);
	addSprite("plyr_intr_6",			rect_plyr_intr_6);
	addSprite("plyr_intr_7",			rect_plyr_intr_7);
}
