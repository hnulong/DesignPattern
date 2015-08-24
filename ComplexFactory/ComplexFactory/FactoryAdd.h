#ifndef _FACTORYADD_H_
#define _FACTORYADD_H_
#include "Factory.h"
#include "OperationAdd.h"

class FactoryAdd:public Factory
{
public:
	virtual Operation* createOperate();
};
#endif