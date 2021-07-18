/*
 * Books.h
 *
 *  Created on: Apr 24, 2021
 *      Author: varun
 */

#ifndef BOOKS_H_
#define BOOKS_H_
#include<string>

using namespace std;

class Books
{

// Private members cannot be used outside class.
private:
	string name;
	int copies;
	string category;

public:
	Books() {}; // Dummy constructor
	Books(string name, int copies, string category); // Dummy constructor overridden for initialization
	~Books(); // Destructor method
	void DisplayInfo();
	void setName(string NewName); //set method prototype
	void setCopies(int NewCopies);
	void setCategory(string NewCategory);
	void BorrowBook();

};

#endif /* BOOKS_H_ */
