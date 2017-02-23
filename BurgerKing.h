/*
 * BurgerKing.h
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#ifndef BURGERKING_H_
#define BURGERKING_H_

#include "BurgerJoint.h"

class BurgerKing : public BurgerJoint{
public:
	BurgerKing();
	virtual ~BurgerKing();

	virtual Burger * CreateBurger(std::string type);
};

#endif /* BURGERKING_H_ */
