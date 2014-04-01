/*
Bill Gowans, Jack Magiera, Jon Richelsen
CSE20212
1943_Project
Classname.cpp
	Implementation of classname class (description of class purpose)
History
	XX/XX/XX	Person's name	Summary of edits made
	XX/XX/XX	Person's name	Summary of edits made
BUT SERIOUSLY, THE ACTUAL HISTORY OF THIS TEMPLATE FILE
	04/01/14	Jon Richelsen	Created file
*/
#include"Classname.h" //The header file for the class should be the FIRST #include
#include<libararyA> //note that these are in alphabetical order
#include<libararyB>
#include<libararyC>
#include<vector>
#include"Sprite.h"
#include"OtherClassname.h" //include header files for other classes last (again, in alphabetical order)
/*
Put all the #includes (INCLUDING THE ONES YOU ALREADY PUT IN THE HEADER) in the source file.
*/

Classname::Classname(int nR) { //default constructor (NOTICE THIS IS THE SAME FUNCTION DESCRIPTION AS IN THE HEADER, BUT WITHOUT THE BRACKETED VARIABLE NAMES
	nRockets = nR; //We will use this format of setting member variables instead of member initialization lists
}

void Classname::print() {
	std::cout << "Hello World";
}
