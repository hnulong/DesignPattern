#ifndef _OPERATIONADAPTER_H_
#define _OPERATIONADAPTER_H_
#include "Operation.h"
#include "OperationAdd.h"

class OperationAdapter:public Operation,public OperationAdd
{
public:
	virtual void operate();
};
#endif