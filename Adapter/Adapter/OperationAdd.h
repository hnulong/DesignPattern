#ifndef _OPERATIONADD_H_
#define _OPERATIONADD_H_
#include <iostream>
using namespace std;

class OperationAdd
{
public:
	virtual void operate();
	OperationAdd(const double &x,const double &y);
	OperationAdd();
private:
	double op1,op2;
};
#endif