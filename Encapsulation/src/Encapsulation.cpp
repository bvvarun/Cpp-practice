//============================================================================
// Name        : Encapsulation.cpp
// Author      : Varun Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Frog {

/* Encapsulation is a concept where all the methods and data members of the class which are not directly used by the users
 * should made private and those methods shall be used by public methods within the class through which users can interact*/
private:
	string name;

private:
	string getName() {return name; }

/* info is the public method which uses getName() to get the name of the frog and print it out*/
public:
	Frog(string name): name(name) {}
	void info() {cout << "My name is: " << getName() << endl; }
};

int main() {

	Frog frog("Freddie");
	frog.info();

	return 0;
}
