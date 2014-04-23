/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
GraphElement.cpp
	Implementation of GraphElement class (store location and sprites of graphic element)
History
	03/31/14	Bill Gowans		Define constructor and SDL_graph_function()
	04/09/14	Jon Richelsen	Standardize, combine with Sprite class, define constructor, addSprite(), getSprite(), get[XY](), and set[XY]()
	04/22/14	Jon Richelsen	Define deconstructor, fix typos, implement GE_Ptrs vector, and simplify addSprite() function with enum, rename get[XY]() and set[XY] to get[XY]Pos() and set[XY]Pos, define get[XY]Vel() and setVel[XY]
*/
#include"GraphElement.h"
#include<algorithm>
#include<string>
#include<vector>
#include"SDL/SDL.h"

std::vector<void *> GraphElement::GE_Ptrs;

GraphElement::GraphElement(double xP, double yP) { //nondefault constructor, sets position [xPos, yPos]
	xPos = xP;
	yPos = yP;
	GE_Ptrs.push_back(this);
}

void GraphElement::addSprite(SDL_Rect clip) { //adds sprite struct to sprites array [name, clip]
	sprites.push_back(clip);
}

double GraphElement::getXPos() {
	return xPos;
}

double GraphElement::getYPos() {
	return yPos;
}

double GraphElement::getXVel() {
	return xVel;
}

double GraphElement::getYVel() {
	return yVel;
}

void GraphElement::setXPos(double xP) {
	xPos = xP;
}

void GraphElement::setYPos(double yP) {
	yPos = yP;
}

void GraphElement::setXVel(double xV) {
	xVel = xV;
}

void GraphElement::setYVel(double yV) {
	yVel = yV;
}

GraphElement::~GraphElement() { //deconstructor, removes this pointer from pointers vector
	GE_Ptrs.erase(std::remove(GE_Ptrs.begin(), GE_Ptrs.end(), this), GE_Ptrs.end());
}
