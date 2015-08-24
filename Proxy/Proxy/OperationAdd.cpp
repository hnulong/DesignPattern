#include "OperationAdd.h"

OperationAdd::OperationAdd(const OperationAdd &op)
{
	this->op1=op.op1;
	this->op2=op.op2;
}

OperationAdd::OperationAdd()
{
}

double OperationAdd::getResult()
{
	return op1+op2;
}