/*
 * Cat.cpp
 *
 *  Created on: Jul 31, 2021
 *      Author: varun
 */

#include "Cat.h"

#include <iostream>

namespace bvv {

void saySomething() {
	std::cout << "Hello there!!" << std::endl;
}

Cat::Cat() {
	// TODO Auto-generated constructor stub

}

void Cat::speak() {
	std::cout << "Meeeowww" << std::endl;
}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
}

}

