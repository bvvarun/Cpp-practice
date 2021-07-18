//============================================================================
// Name        : Arrays.cpp
// Author      : Varun Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	string animals[] = {"cats", "dogs", "elephants"};
	int sizeofanimals = sizeof(animals)/sizeof(string)-1;
	string* pointerAnimals = animals;
	string* pointerEnd = &animals[sizeofanimals];

	cout << *pointerEnd << endl;

	return 0;
}
