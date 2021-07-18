//============================================================================
// Name        : Reversing.cpp
// Author      : Varun Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char name[] = "sweet sam";
	cout << sizeof(name) << endl;
	cout << name[0] << endl;

	for (int i = (sizeof(name)-2); i>=0 ; i--)
	{
		cout << name[i] << flush;
	}

	return 0;
}
