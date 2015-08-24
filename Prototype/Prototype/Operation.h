#ifndef _OPERATION_H_
#define _OPERATION_H_

class Operation
{
public:
	virtual double getResult()=0;
	virtual Operation* clone()=0;
};
#endif