//============================================================================
// Name        : copy.cpp
// Author      : Varun Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;


class Cats
{
private:
	string name;

public:
	Cats() {cout << "Cat created" << endl;};

	//Copy contructor with initializtion list
	//Non const methods of other classes cannot be called in a copy constructor
	Cats(const Cats& other){ name = other.name; cout << "Cat created by copying" << endl;};

	void setName(string name) {this->name = name;};
	void displayName() {cout << "Name of cat is: " << name << endl;};
};

int main() {
	Cats cat1;
	cat1.setName("SweetSam");
	cat1.displayName();
	Cats cat2 = cat1;
	cat2.displayName();
	return 0;
}
