/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Counter.cpp
	Implementation of Counter class (tracks and visually displays properties)
History
	03/26/14	Jack Magiera	Create, define default constructor, nondefault constructor, reset(), increment(), ++, getValue(), render(), and private variables min, max, value, interval, x, and y
	04/16/14	Jon Richelsen	Standardize, change variables to more readable names, define getXPos(), getYPos(), ++ (prefix), and ++ (postfix)
	04/16/14	Jon Richelsen	Fix typos
	04/23/14	Jon Richelsen	Define decrement(), fix decrement() and increment() so they don't violate the minimum and maximum values, respectively
*/
#include "Counter.h"
#include <sstream>
#include <string>
#include "SDL/SDL.h"
#include "SDL/SDL_ttf.h"

Counter::Counter() { //default constructor, sets x-position to 100, y-position to 10, value to 0, minimum to 0, maximum to 10, and interval to 1 [xPos = 100, yPos = 10, value = 0, min = 0, max = 10, interval = 1]
	xPos = 100;
	yPos = 10;
	value = 0;
	min = 0;
	max = 10;
	interval = 1;
}

Counter::Counter(int xP, int yP, int v, int mi, int ma, int i) { //nondefault constructor, sets x-position, y-position, value, minimum, maximum, and interval [xPos, yPos, value, min, max, interval]
	xPos = xP;
	yPos = yP;
	value = v;
	min = mi;
	max = ma;
	interval = i;
}

int Counter::getValue() {
    return value;
}

int Counter::getXPos() {
    return xPos;
}

int Counter::getYPos() {
    return yPos;
}

void Counter::decrement(int times) { //increments counter by n intervals (not allowing to go negative) [n]
	int propValue = value - (interval * times);
	if(propValue < min) {
		value = min;
	} else {
		value -= interval * times;
	}
}

void Counter::increment(int times) { //increments counter by n intervals
	int propValue = value + (interval * times);
	if(propValue > max) {
		value = max;
	} else {
		value += interval * times;
	}
}

void Counter::reset() {
    value = min;
}

SDL_Surface * Counter::render(TTF_Font * font, SDL_Color color) {
    std::stringstream valueStream; //create stringstream to store value
    valueStream << value; //feed value (int) into stringstream
    std::string valueString = valueStream.str(); //extract string from stringstream
    SDL_Surface * counterSurface = TTF_RenderText_Solid(font, valueString.c_str(), color); //create surface
    return counterSurface;
}

Counter Counter::operator++() { //overloads prefix ++ operator to increase value by 1 interval
    this->increment(1); //increment Counter
    return *this; //return Counter
}

Counter Counter::operator++(int) { //overloads postfix ++ operator to increase value by one interval
    Counter tempCounter(xPos, yPos, value, min, max, interval); //create temporary Counter with original values
    this->increment(1); //increment Counter
    return tempCounter; //return temporary Counter with original values
}
