#ifndef _OPERATIONADD_H_
#define _OPERATIONADD_H_
#include "Operation.h"

class OperationAdd:public Operation
{
public:
	void getResult();
	virtual double calculate();
	OperationAdd();
private:
	double op1,op2;
};
#endif