#include "OperationMinus.h"

OperationMinus::OperationMinus(const OperationMinus &pm):op1(pm.op1),op2(pm.op2)
{
}

OperationMinus::OperationMinus():op1(0),op2(1)
{
}

double OperationMinus::getResult()
{
	return op1-op2;
}

Operation* OperationMinus::clone()
{
	cout<<"clone..."<<endl;
	return new OperationMinus(*this);
}