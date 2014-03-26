// Counter.h
// The counter class is an interface of a player class that keeps track of properties that must be counted. This interface is designed to work with SDL to display appropriately on the screen.
// The counter class consists of a maximum, a minimum, an interval, and an icon. The display will as of now look something like this:
/*
 
 
 B: 3
 L: 10
 SCORE: 56034200
 
 (Where B and L are icons for Bombs and Lives.)
 
 */
// Changes may be made in the future to allow the display to look something like this:
/*
 
 B B B
 LLLLLLLLLL
 SCORE: 56034200
 
 */
// However, that would most likely require an additional subclass.

#ifndef __SDL_Setup__Counter__
#define __SDL_Setup__Counter__

#include <iostream>
#include "SDL/SDL.h"
#include "SDL_TTF/SDL_TTF.h"

class Counter {
private:
    int min;
    int max;
    int value;
    int interval;
    int x;
    int y;
public:
    Counter();
    Counter(int, int, int, int, int, int);
    void reset();
    void increment(int);
    friend Counter operator++(Counter&,int);
    int getValue();
    SDL_Surface* render(TTF_Font*, SDL_Color);
};


#endif /* defined(__SDL_Setup__Counter__) */
