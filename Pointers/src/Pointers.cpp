//============================================================================
// Name        : Pointers.cpp
// Author      : Varun Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value1 = 10;
	// pvalue is a pointer to value1
	// *pvalue gives out value1 via pointer
	int *pvalue1 = &value1;

	cout << "Int value: " << value1 << endl;
	cout << "Pointer to Int value: " << pvalue1 << endl;
	cout << "Int value via pointer: " << *pvalue1 << endl;
	return 0;
}
