#ifndef _OPERATIONADD_H_
#define _OPERATIONADD_H_
#include "Operation.h"
#include <iostream>
using namespace std;

class OperationAdd:public Operation
{
public:
	virtual void operateA();
	virtual void operateB();
	OperationAdd(const double &x,const double &y);
	OperationAdd();
private:
	double op1,op2;
};
#endif