#include "OperationMinus.h"

OperationMinus::OperationMinus(const double &x,const double &y)
{
	this->op1=x;
	this->op2=y;
}

OperationMinus::OperationMinus()
{
	this->op1=1;
	this->op2=1;
}

double OperationMinus::getResult()
{
	return op1-op2;
}