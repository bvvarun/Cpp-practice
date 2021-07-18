//============================================================================
// Name        : Refernces.cpp
// Author      : Varun Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int value1 = 5;
	int &value2 = value1; //Value2 is referenced(copies) to value1
	value2 = 50;

	cout << value1 << "  " << value2 << endl;
	return 0;
}
