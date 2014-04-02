/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Classname.h
	Interface of classname class (description of class purpose)
History
	XX/XX/XX	Person's name	Summary of edits made
	XX/XX/XX	Person's name	Summary of edits made
To Do
	To do item 1
	To do item 2
BUT SERIOUSLY, THE ACTUAL HISTORY OF THIS TEMPLATE FILE
	04/01/14	Jon Richelsen	Create file
	04/02/14	Jon Richelsen	Add "To Do" section
*/
#ifndef CLASSNAME_H
#define CLASSNAME_H

#include<vector> //note that these are in alphabetical order
#include"Sprite.h"
/*
NOTE: This is not me (Jon) being super picky. I've spend some time on Stack Overflow and this seems to be the accepted industry practice. ONLY #include IN HEADERS WHAT IS NEEDED TO SUPPORT THE HEADER. In this example, "Sprite.h" is needed because there is a Sprite object "sampleSprite". <vector> is needed because there is a vector<int> object "weapons". The other #includes will be in the source file.

Also, never use "using namespace std". Using it is a practice frowned upon in industry. Use "std::cout" or "std::string" instead of declaring a global namespace. Again, this is not me being picky, but a practice that may save us a bunch of headaches down the road.
*/

class Classname {
	typedef int myInt;
	public:
		Classname(int); //default constructor [nRockets]
		//Note that explanations for variables are put in BRACKETS
		void print();
		//This function has an obvious function, so NO COMMENTING NECESSARY!
	private:
		vector<int> weapons;
		Sprite sampleSprite;
		int nGuns;
		int nRockets;
		//These variables have obvious names, so NO COMMENTING NECESSARY!
		double yaw; //angle (measured in radians with forward being 0) of plane's rotation around y-axis
		//That variable needed a comment because it needed explanation of units and how it is measured
};

#endif //CLASSNAME_H
