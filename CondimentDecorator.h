/*
 * CondimentDecorator.h
 *
 *  Created on: Oct 2, 2016
 *      Author: berkanercan
 */

#ifndef CONDIMENTDECORATOR_H_
#define CONDIMENTDECORATOR_H_

#include "Beverage.h"

using namespace std;

class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator() {}
	virtual ~CondimentDecorator(){}
	virtual string getDescription() = 0;
};

#endif /* CONDIMENTDECORATOR_H_ */
