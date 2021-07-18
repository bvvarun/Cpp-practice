/*
 * Books.cpp
 *
 *  Created on: Apr 24, 2021
 *      Author: varun
 */

#include<iostream>
#include<sstream>
#include "Books.h"


Books::Books(string name, int copies, string category) //constructor for intialization
{
	this->name = name;
	this->copies = copies;
	this->category = category;
}

Books::~Books() //Destructor for killing the object
{
	cout << "Book destroyed" << endl;
}

void Books::DisplayInfo() //use of stringstream
{
	stringstream ss;
	ss << "Name of the book is: ";
	ss << name << "\n";
	ss << "Number of copies available are:";
	ss << copies << "\n";
	ss << "Book belongs to category:";
	ss << category << "\n";

	cout << ss.str() << endl;
}

void Books::setName(string NewName) //Example of set method
{
	name = NewName;
	cout << "Name changed to: " << name << endl;
}

void Books::setCopies(int NewCopies)
{
	copies = NewCopies;
	cout << "Number of copies changed to: " << copies << endl;

}

void Books::setCategory(string NewCategory)
{
	category = NewCategory;
	cout << "Category changed to: " << category << endl;
}

void Books::BorrowBook()
{
	if (copies > 1)
	{
		copies = copies - 1;
		cout << "You have successfully borrowed the book \n" << flush;
		cout << "Number of copies: " << copies << endl;
	}
	else
	{
		cout << "Book is not available" << endl;
	}
}
