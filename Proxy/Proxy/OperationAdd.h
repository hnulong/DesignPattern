#ifndef _OPERATIONADD_H_
#define _OPERATIONADD_H_
#include "Operation.h"

class OperationAdd:public Operation
{
public:
	virtual double getResult();
	OperationAdd(const OperationAdd &op);
	OperationAdd();
};
#endif