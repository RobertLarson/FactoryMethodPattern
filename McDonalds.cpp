/*
 * McDonalds.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#include "McDonalds.h"

#include "McDonaldsBurger.h"
#include "McDonaldsCheeseBurger.h"

McDonalds::McDonalds() {
}

McDonalds::~McDonalds() {
}

Burger* McDonalds::CreateBurger(std::string type) {
   if(type.compare("cheeseburger") == 0)
   {
	   return new McDonaldsCheeseBurger();
   }
   else
   {
	   return new McDonaldsBurger();
   }
}


