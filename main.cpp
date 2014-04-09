#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
#include "Counter.h"
#include <string>

const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;
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
			SDL_SetColorKey (optImage, SDL_SRCCOLORKEY, SDL_MapRGB( optImage->format, 0, 0xFF, 0xFF) );
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
    
	double x = 0;
	double y = 0;    
    
    // Pass zero for width and height to draw the whole surface
    SDL_Rect scoreLocation = { 5, WINDOW_HEIGHT - 100, 0, 0 };
    
    SDL_Event event;
    bool gameRunning = true;
    SDL_Surface* scoreSurface = score.render(font, foregroundColor);

	test.x = 65;
	test.y = 28;
	test.w = 24;
	test.h = 16;
    
    while (gameRunning)
    {
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
		if (keystates[SDLK_UP] && y > 1) y -= .5;
		if (keystates[SDLK_DOWN] && y < WINDOW_HEIGHT - 10) y += .5;
		if (keystates[SDLK_LEFT] && x > 1) x -= .5;
		if (keystates[SDLK_RIGHT] && x < WINDOW_WIDTH - 10) x += .5;
        
        SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
        
        SDL_BlitSurface(scoreSurface, NULL, screen, &scoreLocation);
	applySurface(x,y,sheet,screen, &test);        
        SDL_Flip(screen);
    }
    
    SDL_FreeSurface(scoreSurface);
    
    TTF_CloseFont(font);
    
    TTF_Quit();
    
    SDL_Quit();
    
    return 0;
}
