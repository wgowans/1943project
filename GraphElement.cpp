/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
GraphElement.cpp
	Implementation of GraphElement class (store location and sprites of graphic element)
History
	03/31/14	Bill Gowans		Define constructor and SDL_graph_function()
	04/09/14	Jon Richelsen	Standardize, combine with Sprite class, define constructor, addSprite(), getSprite(), getX(), getY(), setX(), and setY()
To Do
	Coordinate loading of sprites in driver
*/

#include "GraphElement.h"
#include<string>
#include<vector>
#include "SDL/SDL.h"

GraphElement::GraphElement(double xP, double yP) { //nondefault constructor, sets position [xPos, yPos]
	xPos = xP;
	yPos = yP;
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
