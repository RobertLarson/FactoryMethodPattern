/*
 * BurgerKindBurger.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#include "BurgerKingBurger.h"

BurgerKingBurger::BurgerKingBurger() {
	   m_name = std::string("Burger King Burger");
	   m_bun  = std::string("Sesame Seed Bun");
	   m_condiments.push_back("Ketchup");
	   m_condiments.push_back("Mustard");
	   m_condiments.push_back("Pickle");
}

BurgerKingBurger::~BurgerKingBurger() {
}

