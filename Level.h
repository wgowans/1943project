#ifndef LEVEL_H
#define LEVEL_H

using namespace std;

class Level {
	public:
		Level (int, string);
		Background levelBack (bgFile);
	private:
		int lvl;
		string bgFile;
};

#endif