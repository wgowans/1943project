/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
main.cpp
	Driver for Blitz game
History
	03/26/14	Jack Magiera	Create, insert basic structure from Lazy Foo' SDL Tutorials
	04/08/14	Jack Magiera	Add functionality to adjust counter using arrow keys
	04/08/14	Jack Magiera	Implement simply flying plane sprite (does not use classes)
	04/14/14	Jack Magiera	Edit to make compatible with GraphElement
	04/16/14	Jon Richelsen	Standardize
To Do
*/
#include<iostream>
#include<string>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_ttf.h"
#include"Counter.h"
#include"GraphElement.h"
#include "Player.h"

const int WINDOW_WIDTH = 480;
const int WINDOW_HEIGHT = 640;
const char* WINDOW_TITLE = "SDL Start";

SDL_Surface *sheet = NULL;
SDL_Rect test;

SDL_Surface *loadImage( std::string filename ){
	SDL_Surface* loadedImage = NULL;
	SDL_Surface* optImage = NULL;
	loadedImage = IMG_Load(filename.c_str() );
	if (loadedImage != NULL){
		optImage = SDL_DisplayFormat(loadedImage);
		SDL_FreeSurface(loadedImage);
		if (optImage != NULL){
			SDL_SetColorKey (optImage, SDL_SRCCOLORKEY, SDL_MapRGB( optImage->format, 0, 0x2A, 0x88) );
		}
	}
	return optImage;
}

void applySurface( int x, int y, SDL_Surface* src, SDL_Surface* dest, SDL_Rect* clip = NULL){
	SDL_Rect offset;

	offset.x = x;
	offset.y = y;
	SDL_BlitSurface (src, clip, dest, &offset);
}

bool loadFiles(){
	sheet = loadImage("sprites.png");
	if (sheet == NULL ) {
		std::cout << "Could not load" << std::endl;
		return false;
	}
	return true;
}

int main(int argc, char **argv)
{
    SDL_Init( SDL_INIT_VIDEO );
    
    TTF_Init();

    SDL_Surface* screen = SDL_SetVideoMode( WINDOW_WIDTH, WINDOW_HEIGHT, 0,
                                           SDL_HWSURFACE | SDL_DOUBLEBUF );
    SDL_WM_SetCaption( WINDOW_TITLE, 0 );
    
    TTF_Font *font = TTF_OpenFont("./arial.ttf", 28);
    
    SDL_Color foregroundColor = { 255, 255, 255 };
    SDL_Color backgroundColor = { 0, 0, 0 };
    
	if (loadFiles() == false) return 1;
	std::cout << "Loaded" << std::endl;

	Counter score;
	score.increment(5);
    
    
    // Pass zero for width and height to draw the whole surface
    SDL_Rect scoreLocation = { 5, WINDOW_HEIGHT - 100, 0, 0 };
    
    SDL_Event event;
    bool gameRunning = true;
    SDL_Surface* scoreSurface = score.render(font, foregroundColor);

	std::vector<GraphElement*> elements;	

	Player newPlayer(0,0);
	elements.push_back(&newPlayer);
    while (gameRunning)
    {
	newPlayer.setXVel(0);
	newPlayer.setYVel(0);
	scoreSurface = score.render(font, foregroundColor);
        if (SDL_PollEvent(&event))
        {
            	if (event.type == SDL_QUIT)
            	{
                	gameRunning = false;
            	}
		if (event.type == SDL_KEYDOWN)
		{
			SDLKey keyPressed = event.key.keysym.sym;
			switch (keyPressed){
				case SDLK_ESCAPE:
					gameRunning = false;
					break;
				case SDLK_z:
					score.increment(1);
					break;
				case SDLK_x:
					score.increment(10);
					break;
			}
		}
        }

//Begin testing movement
		Uint8 *keystates = SDL_GetKeyState(NULL);
		if (keystates[SDLK_UP] && newPlayer.getY() > 1) newPlayer.setYVel(newPlayer.getYVel() - .1);
		if (keystates[SDLK_DOWN] && newPlayer.getY() < WINDOW_HEIGHT - 10) newPlayer.setYVel(newPlayer.getYVel() + .1);
		if (keystates[SDLK_LEFT] && newPlayer.getX() > 1) newPlayer.setXVel(newPlayer.getXVel() - .1);
		if (keystates[SDLK_RIGHT] && newPlayer.getX() < WINDOW_WIDTH - 10) newPlayer.setXVel(newPlayer.getXVel() + .1);
        
	
        SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
        
        SDL_BlitSurface(scoreSurface, NULL, screen, &scoreLocation);
	newPlayer.setX(newPlayer.getX()+newPlayer.getXVel());
	newPlayer.setY(newPlayer.getY()+newPlayer.getYVel());

	applySurface(newPlayer.getX(),newPlayer.getY(),sheet,screen, &newPlayer.getSprite());        
        SDL_Flip(screen);
    }
    
    SDL_FreeSurface(scoreSurface);
    
    TTF_CloseFont(font);
    
    TTF_Quit();
    
    SDL_Quit();
    
    return 0;
}
