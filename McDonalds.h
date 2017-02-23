/*
 * McDonalds.h
 *
 *  Created on: Feb 22, 2017
 *      Author: Robert Larson
 */

#ifndef MCDONALDS_H_
#define MCDONALDS_H_

#include "BurgerJoint.h"

class McDonalds : public BurgerJoint {
public:
	McDonalds();
	virtual ~McDonalds();

    virtual Burger * CreateBurger(std::string type);
};

#endif /* MCDONALDS_H_ */
