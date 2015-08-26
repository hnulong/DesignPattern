#ifndef _OPERATIONADD_H_
#define _OPERATIONADD_H_
#include "Operation.h"
#include <iostream>
using namespace std;

class OperationAdd:public Operation
{
public:
	virtual double getResult();
};
#endif