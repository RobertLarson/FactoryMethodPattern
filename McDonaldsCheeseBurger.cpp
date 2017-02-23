/*
 * McDonaldsCheeseBurger.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#include "McDonaldsCheeseBurger.h"

McDonaldsCheeseBurger::McDonaldsCheeseBurger() {
	  m_name = std::string("McDonald's Cheese Burger");
	   m_bun  = std::string("Plain Bun");
	   m_condiments.push_back("Ketchup");
	   m_condiments.push_back("Mustard");
	   m_condiments.push_back("Onions");
	   m_condiments.push_back("Pickle");
	   m_condiments.push_back("Cheese");
}

McDonaldsCheeseBurger::~McDonaldsCheeseBurger() {
}

