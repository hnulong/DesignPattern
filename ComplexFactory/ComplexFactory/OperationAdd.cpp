#include "OperationAdd.h"

OperationAdd::OperationAdd(const double &x,const double &y)
{
	this->op1=x;
	this->op2=y;
}

OperationAdd::OperationAdd()
{
	this->op1=1;
	this->op2=1;
}

double OperationAdd::getResult()
{
	return op1+op2;
}