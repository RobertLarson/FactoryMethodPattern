/*
 * BurgerJoint.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#include "BurgerJoint.h"

#include "Burger.h"

BurgerJoint::BurgerJoint() {
}

BurgerJoint::~BurgerJoint() {
}

Burger* BurgerJoint::OrderBurger(std::string type) {
	Burger * burger = CreateBurger(type);

	burger->Grill();
	burger->Prepare();
	burger->Wrap();

	return burger;
}


