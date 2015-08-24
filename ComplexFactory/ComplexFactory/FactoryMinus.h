#ifndef _FACTORYMINUS_H_
#define _FACTORYMINUS_H_
#include "Factory.h"
#include "OperationMinus.h"

class FactoryMinus:public Factory
{
public:
	virtual Operation* createOperate();
};
#endif