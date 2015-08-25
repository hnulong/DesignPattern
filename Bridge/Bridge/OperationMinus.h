#ifndef _OPERATIONMINUS_H_
#define _OPERATIONMINUS_H_
#include "Operation.h"
#include <iostream>
using namespace std;

class OperationMinus:public Operation
{
public:
	OperationMinus(const double &x,const double &y);
	OperationMinus();
	virtual void operateA();
	virtual void operateB();
private:
	double op1,op2;
};
#endif