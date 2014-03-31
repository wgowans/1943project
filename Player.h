#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player : GraphElement (int, int) {
	public:
		Player ();
		Sprite for (string, string);
		Sprite slightR (string, int, int);
		Sprite sharpR (string, int, int);
		Sprite slightL (string, int, int);
		Sprite sharpR (string, int, int);
		Counter scoreCntr (int);
		Counter healthCntr (int);
		Counter ammoCntr (int);
		Counter livesCntr (int);
		int getX ();
		int getY ();
		int getXVel ();
		int getYVel();
	private:
		int x_vel;
		int y_vel;
};

#endif