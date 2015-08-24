#ifndef _OPERATIONMINUS_H_
#define _OPERATIONMINUS_H_
#include "Operation.h"

class OperationMinus:public Operation
{
public:
	OperationMinus(const double &x,const double &y);
	OperationMinus();
	virtual double getResult();
};
#endif