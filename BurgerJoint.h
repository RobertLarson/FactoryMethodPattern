/*
 * BurgerJoint.h
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#ifndef BURGERJOINT_H_
#define BURGERJOINT_H_

#include <string>

class Burger;

class BurgerJoint {
public:
	BurgerJoint();
	virtual ~BurgerJoint();

	virtual Burger * CreateBurger(std::string type) = 0;

	virtual Burger * OrderBurger(std::string type);
};

#endif /* BURGERJOINT_H_ */
