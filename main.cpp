#include "SDL/SDL.h"
#include "SDL/SDL_ttf.h"
#include "Counter.h"

const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;
const char* WINDOW_TITLE = "SDL Start";


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
    
    Counter score;
    score.increment(5);
    
    
    
    // Pass zero for width and height to draw the whole surface
    SDL_Rect scoreLocation = { 5, WINDOW_HEIGHT - 100, 0, 0 };
    
    SDL_Event event;
    bool gameRunning = true;
    SDL_Surface* scoreSurface = score.render(font, foregroundColor);
    
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
				case SDLK_UP:
					score.increment(1);
					break;
				case SDLK_DOWN:
					score.increment(-1);
					break;
			}
		}
	
        }
        
        SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
        
        SDL_BlitSurface(scoreSurface, NULL, screen, &scoreLocation);
        
        SDL_Flip(screen);
    }
    
    SDL_FreeSurface(scoreSurface);
    
    TTF_CloseFont(font);
    
    TTF_Quit();
    
    SDL_Quit();
    
    return 0;
}
