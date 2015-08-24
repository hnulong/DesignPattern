#ifndef _OPERATION_H_
#define _OPERATION_H_

class Operation
{
public:
	virtual double getResult()=0;
	Operation(double x,double y);
	Operation();
public:
	double op1,op2;
};
#endif