/*
 * Burger.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#include "Burger.h"

#include <iostream>

Burger::Burger() {
}

Burger::~Burger() {
}

void Burger::Grill() {
	std::cout << "Grill for 5 minutes... done\n";
}

void Burger::Prepare() {
	std::cout << "Preparing " << m_name << "\n";
	std::cout << "Add bottom half of " << m_bun << "...\n";
	std::cout << "Add grilled burger patty...\n";
	std::cout << "Adding condiments :\n";
	std::vector<std::string>::iterator condimentsIter;
	for(condimentsIter  = m_condiments.begin();
		condimentsIter != m_condiments.end();
		condimentsIter++)
	{
		std::string condiment = *condimentsIter;
		std::cout << "    " << condiment << "\n";
	}
	std::cout << "Adding top " << m_bun << "\n";
}

void Burger::Wrap() {
	std::cout << "Wrapping your " << GetName() << "\n";
}


