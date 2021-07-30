//============================================================================
// Name        : Inheritance.cpp
// Author      : Varun Venkatesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	int id;

public:
	Animal() { cout << "Animal class created" << endl;}
	Animal(int id): id(id) {cout << "Animal: param constructor called" << endl; }
	void speak() { cout << "Grrrrr" << endl;}
	void info() { cout << "ID: " << id << endl; }
};

/* Cat is subclass of Animal class. Cat class inherits all the methods from Animal class
 * When an object of Cat is created, the constructor for Animal class is called and then
 * the constructor of Cat class is called. */

class Cat: public Animal {
public:
	Cat() { cout << "Cat class created" << endl;}
	Cat(int id): Animal(id) { cout << "Cat: param constructor called" << endl; }
	void jump() { cout << "cat jumping" << endl; }
};

/* Tiger is subclass of Cat class. Tiger class inherits all the methods from Cat and Animal class
 * When an object of Tiger is created, the constructor for Animal and Cat class is called first and
 * then the constructor of Tiger class is called. */
class Tiger: public Cat {
public:
	//Tiger() { cout << "Tiger class created" << endl;}
	Tiger(): Cat(0) { cout << "Tiger: No arguement constructor called" << endl; }
	void attack() { cout << "Attacking!" << endl; }
};

int main() {
	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.info();
	tiger.speak();
	tiger.jump();
	tiger.attack();

	return 0;
}
