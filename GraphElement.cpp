/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
GraphElement.cpp
	Implementation of GraphElement class (store location and sprites of graphic element)
History
	03/31/14	Bill Gowans		Define constructor and SDL_graph_function()
	04/09/14	Jon Richelsen	Standardize, combine with Sprite class, define constructor, addSprite(), getSprite(), getX(), getY(), setX(), and setY()
	04/22/14	Jon Richelsen	Define deconstructor, fix typos
*/
#include"GraphElement.h"
#include<algorithm>
#include<string>
#include<vector>
#include"SDL/SDL.h"

GraphElement::GraphElement(double xP, double yP) { //nondefault constructor, sets position [xPos, yPos]
	xPos = xP;
	yPos = yP;
	GE_Ptrs.push_back(this);
}

void GraphElement::addSprite(std::string n, SDL_Rect c) { //adds sprite struct to sprites array [name, clip]
	sprite newSprite;
	newSprite.name = n;
	newSprite.clip = c;
	sprites.push_back(newSprite);
}

double GraphElement::getX() {
	return xPos;
}

double GraphElement::getY() {
	return yPos;
}

void GraphElement::setX(double xP) {
	xPos = xP;
}

void GraphElement::setY(double yP) {
	yPos = yP;
}

GraphElement::~GraphElement() { //deconstructor, removes this pointer from pointers vector
	GE_Ptrs.erase(std::remove(GE_Ptrs.begin(), GE_Ptrs.end(), this), GE_Ptrs.end());
}
