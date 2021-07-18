//============================================================================
// Name        : New.cpp
// Author      : Varun Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class cats{

private:
	string name;

public:
	// dummy constructor
	cats(){
		cout << "Cat created" << endl;
	}

	// copy constructor
	cats(const cats& other){
		name = other.name;
		cout << "Cat created by copying" << endl;
	}

	// destructor
	~cats(){
		cout << "cat destroyed" << endl;
	}

	// set name method
	void setName(string name) {
		this->name = name;
	}

	//display name method
	void displayName() {
		cout << "Name of cat is: " << name << endl;
	}

};

int main(){
	// new is used to allocate memory to newly instantiated object to a pointer
	cats *pcat1 = new cats();

	pcat1->setName("Doggy");
	pcat1->displayName();

	// delete should be used to erase the object from the memory
	delete pcat1;
}
