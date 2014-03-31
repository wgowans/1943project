#ifndef ENEMY_H
#define ENEMY_H

using namespace std;

class Enemy {
	public:
		Player ();
		Sprite for (string, string);
		Sprite slightR (string, int, int);
		Sprite sharpR (string, int, int);
		Sprite slightL (string, int, int);
		Sprite sharpR (string, int, int);
		Counter healthCntr;
		int getX ();
		int getY ();
		int getXVel ();
		int getYVel();		
	private:

};

#endif