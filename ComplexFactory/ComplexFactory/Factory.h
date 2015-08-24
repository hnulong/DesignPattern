#ifndef _FACTORY_H_
#define _FACTORY_H_
#include "Operation.h"

class Factory
{
public:
	virtual Operation* createOperate()=0;
};
#endif