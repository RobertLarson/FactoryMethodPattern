/*
 * BurgerKing.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#include "BurgerKing.h"

#include "BurgerKingBurger.h"
#include "BurgerKingCheeseBurger.h"

BurgerKing::BurgerKing() {
}

BurgerKing::~BurgerKing() {
}

Burger* BurgerKing::CreateBurger(std::string type) {
	   if(type.compare("cheeseburger") == 0)
	   {
		   return new BurgerKingCheeseBurger();
	   }
	   else
	   {
		   return new BurgerKingBurger();
	   }
}


