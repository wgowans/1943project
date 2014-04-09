/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
GraphElement.h
	Interface of GraphElement class (store location and sprites of graphic element)
History
	03/31/14	Bill Gowans		Declare constructor, SDL_graph_function(), and private variables x_Pos and y_Pos
	04/09/14	Jon Richelsen	Standardize, combine with Sprite class, declare addSprite(), getSprite(), getX(), getY(), setX(), setY(), and private variable sprites
To Do
	Test
*/
#ifndef GRAPHELEMENT_H
#define GRAPHELEMENT_H

#include<string>
#include<vector>
#include"SDL/SDL.h"

typedef struct {
	string name;
	SDL_Rect clip
} sprite;

class GraphElement {
	public:
		GraphElement(int, int); //nondefault constructor, sets position [xPos, yPos]
		void addSprite(string, SDL_Rect); //adds sprite struct to sprites array [name, clip]
		virtual SDL_Rect getSprite() = 0; //returns SDL_Rect of sprite based on derived class behavior
		int getX();
		int getY();
		void setX(int);
		void setY(int);
	private:
		vector<sprite> sprites;
		int xPos;
		int yPos;
};

#endif //GRAPHELEMENT_H
