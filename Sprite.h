#ifndef SPRITE_H
#define SPRITE_H

using namespace std;

class Sprite {
	public:
		Sprite (string, string);
		void blit(int, int);
	private:
		static char *imageFile;
		SDL_Rect clipRegion;
};

#endif