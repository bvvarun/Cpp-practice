/*
 * Cat.h
 *
 *  Created on: Jul 31, 2021
 *      Author: varun
 */

#ifndef CAT_H_
#define CAT_H_

namespace bvv {

void saySomething();

class Cat {
public:
	Cat();
	void speak();
	virtual ~Cat();
};

}

#endif /* CAT_H_ */
