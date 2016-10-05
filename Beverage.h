/*
 * Beverage.h
 *
 *  Created on: Oct 2, 2016
 *      Author: berkanercan
 */

#ifndef BEVERAGE_H_
#define BEVERAGE_H_

#include <string>

using namespace std;

class Beverage
{
public:
	virtual ~Beverage() {}
	string getDescription()
	{
		return description;
	}
	virtual double cost() = 0;

protected:
	string description;
};




#endif /* BEVERAGE_H_ */
