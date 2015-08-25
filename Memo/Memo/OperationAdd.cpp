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

Memento* OperationAdd::createMemo()
{
	return new Memento(op1);
}

void OperationAdd::restoreMemo(Memento *memo)
{
	this->op1=memo->getValue();
}

void OperationAdd::setOp(double val)
{
	this->op1=val;
}