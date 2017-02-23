/*
 * Burger.h
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#ifndef BURGER_H_
#define BURGER_H_

#include <string>
#include <vector>

class Burger {
public:
	Burger();
	virtual ~Burger();

	void Grill();
	void Prepare();
	void Wrap();
	std::string GetName() { return m_name; }

protected:
	std::string m_name;
	std::string m_bun;
	std::vector<std::string> m_condiments;
};

#endif /* BURGER_H_ */
