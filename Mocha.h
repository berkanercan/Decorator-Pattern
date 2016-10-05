/*
 * Mocha.h
 *
 *  Created on: Oct 2, 2016
 *      Author: berkanercan
 */

#ifndef MOCHA_H_
#define MOCHA_H_

#include "CondimentDecorator.h"
#include "Beverage.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha( Beverage* beverage);
	~Mocha() {}

	string getDescription();
	double cost();

private:
	Beverage* beverage;

};


#endif /* MOCHA_H_ */
