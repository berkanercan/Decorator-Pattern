/*
 * HauseBlend.h
 *
 *  Created on: Oct 2, 2016
 *      Author: berkanercan
 */

#ifndef HOUSEBLEND_H_
#define HOUSEBLEND_H_

#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend();
	~HouseBlend();

	double cost();
};

#endif /* HOUSEBLEND_H_ */
