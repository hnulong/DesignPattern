#ifndef _OPERATIONFACTORY_H_
#define _OPERATIONFACTORY_H_
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationMinus.h"

class OperationFactory
{
public:
	Operation* getOperation(char opCode);
private:
	Operation *operation;
};

#endif