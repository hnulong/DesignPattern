#ifndef _OPERATIONMINUS_H_
#define _OPERATIONMINUS_H_
#include "Operation.h"
#include <iostream>
using namespace std;

class OperationMinus:public Operation
{
public:
	virtual double getResult();
	virtual Operation* clone();
	OperationMinus(const OperationMinus &pm);
	OperationMinus();
private:
	double op1,op2;
};
#endif