/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Background.h
	Interface of background class (displays scrolling background)
History
	03/31/14	Bill Gowans		Create
	04/02/14	Jon Richelsen	Standardize
To Do
*/
#ifndef BACKGROUND_H
#define BACKGROUND_H

#include<string>

class Background {
	public:
		Background(string);
	private:
		string fileName;
};

#endif //BACKGROUND_H
