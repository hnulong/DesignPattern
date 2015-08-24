#include "OperationAdd.h"

void OperationAdd::getResult()
{
	cout<<"====="<<endl;
}
OperationAdd::OperationAdd():op1(0),op2(1)
{
}
double OperationAdd::calculate()
{
	return op1+op2;
}