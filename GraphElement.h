/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
GraphElement.h
	Interface of GraphElement class (store location and sprites of graphic element)
History
	03/31/14	Bill Gowans		Declare constructor, SDL_graph_function(), and private variables x_Pos and y_Pos
	04/09/14	Jon Richelsen	Standardize, combine with Sprite class, declare addSprite(), getSprite(), getX(), getY(), setX(), setY(), and private variable sprites
	04/22/14	Jon Richelsen	Declare deconstructor and private variable GE_Ptrs, remove sprite struct, and change sprites vector to a vector of SDL_Rects
To Do
	Test that vector of pointers works
*/
#ifndef GRAPHELEMENT_H
#define GRAPHELEMENT_H

#include<string>
#include<vector>
#include"SDL/SDL.h"

class GraphElement {
	public:
		GraphElement(double, double); //nondefault constructor, sets position [xPos, yPos]
		void addSprite(SDL_Rect); //adds sprite struct to sprites array [clip]
		virtual SDL_Rect getSprite() = 0; //returns SDL_Rect of sprite based on derived class behavior
		double getX();
		double getY();
		void setX(double);
		void setY(double);
		std::vector<SDL_Rect> sprites;
		~GraphElement(); //deconstructor, removes this pointer from pointers vector
	private:
		static std::vector<void *> GE_Ptrs;
		double xPos;
		double yPos;
};

#endif //GRAPHELEMENT_H
