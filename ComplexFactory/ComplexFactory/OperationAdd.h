#ifndef _OPERATIONADD_H_
#define _OPERATIONADD_H_
#include "Operation.h"

class OperationAdd:public Operation
{
public:
	virtual double getResult();
	OperationAdd(const double &x,const double &y);
	OperationAdd();
};
#endif