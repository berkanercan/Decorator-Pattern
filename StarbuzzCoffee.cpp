/*
 * simulator.cpp
 *
 *  Created on: Oct 2, 2016
 *      Author: berkanercan
 */

#include "Espresso.h"
#include "Beverage.h"
#include "Mocha.h"
#include <iostream>
int main()
{
	Beverage* beverage = new Espresso();
	printf("%s $ %f\n", beverage->getDescription().c_str(), beverage->cost() );

	beverage = new Mocha(beverage);
	printf("%s $ %f\n", beverage->getDescription().c_str(), beverage->cost() );

	return 0;
}




