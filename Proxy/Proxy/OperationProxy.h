#ifndef _OPERATIONPXOXY_H_
#define _OPERATIONPXOXY_H_
#include "OperationAdd.h"
#include <iostream>
using namespace std;

class OperationProxy:public Operation
{
public:
	OperationProxy();
	OperationProxy(const OperationAdd &add);
	virtual double getResult();
	void print();
private:
	OperationAdd* operation;
};
#endif
