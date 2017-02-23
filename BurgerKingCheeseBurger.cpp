/*
 * BurgerKingCheeseBurger.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#include "BurgerKingCheeseBurger.h"

BurgerKingCheeseBurger::BurgerKingCheeseBurger() {
	   m_name = std::string("Burger King Cheese Burger");
	   m_bun  = std::string("Sesame Seed Bun");
	   m_condiments.push_back("Ketchup");
	   m_condiments.push_back("Mustard");
	   m_condiments.push_back("Pickle");
	   m_condiments.push_back("Cheese");
}

BurgerKingCheeseBurger::~BurgerKingCheeseBurger() {
	// TODO Auto-generated destructor stub
}

