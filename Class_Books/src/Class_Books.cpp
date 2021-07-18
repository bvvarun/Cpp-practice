//============================================================================
// Name        : Class_Books.cpp
// Author      : Varun Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include"Books.h"

int main() {

	Books book1("HarryPotter", 10, "Fantasy");
	book1.DisplayInfo();
	book1.setCategory("Fiction");
	book1.DisplayInfo();

	return 0;
}
