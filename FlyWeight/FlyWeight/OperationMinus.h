#ifndef _OPERATIONMINUS_H_
#define _OPERATIONMINUS_H_
#include "Operation.h"
#include <iostream>
using namespace std;

class OperationMinus:public Operation
{
public:
	virtual double getResult();
};
#endif