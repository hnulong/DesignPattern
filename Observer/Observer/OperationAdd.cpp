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

void OperationAdd::update()
{
	cout<<"add:"<<op1+op2<<endl;
}
