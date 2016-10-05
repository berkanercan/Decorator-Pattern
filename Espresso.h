/*
 * Espresso.h
 *
 *  Created on: Oct 2, 2016
 *      Author: berkanercan
 */

#ifndef ESPRESSO_H_
#define ESPRESSO_H_
#include "Beverage.h"

class Espresso : public Beverage
{
public:
	Espresso();
	~Espresso();

	double cost();
};



#endif /* ESPRESSO_H_ */
