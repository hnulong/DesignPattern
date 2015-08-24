#ifndef _OPERATIONDECORATE_H_
#define _OPERATIONDECORATE_H_
#include "Operation.h"
#include <iostream>
using namespace std;

class OperationDecorate:public Operation
{
public:
	OperationDecorate(Operation *operation);
	virtual double getResult();
	void print();
private:
	Operation* operation;
};
#endif