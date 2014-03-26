//
//  Counter.cpp
//  SDL_Setup
//
//  Created by Jack Magiera on 3/21/14.
//  Copyright (c) 2014 Jack Magiera. All rights reserved.
//

#include "Counter.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include "SDL_TTF/SDL_TTF.h"

Counter::Counter(){
    min = 0;
    max = 10;
    interval = 1;
    x = 100;
    y = 10;
    value = 0;
}

Counter::Counter(int x, int y, int min, int max, int start, int interval){
    min = min;
    max = max;
    interval = interval;
    x = x;
    y = y;
    value = start;
}

void Counter::increment(int times){
    while (times > 0 && value >= min && value <= max){
        value += interval;
        times--;
    }
}

Counter operator++ (Counter & C, int z){
    C.increment(1);
    return C;
}

void Counter::reset(){
    value = min;
}

int Counter::getValue(){
    return value;
}

SDL_Surface* Counter::render(TTF_Font* font, SDL_Color color){
    std::string s = std::to_string(value);
    SDL_Surface* display = TTF_RenderText_Solid(font, s.c_str(), color);
    return display;
}