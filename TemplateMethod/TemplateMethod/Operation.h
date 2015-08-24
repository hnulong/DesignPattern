#ifndef _OPERATION_H_
#define _OPERATION_H_
#include <iostream>
using namespace std;

class Operation
{
public:
	void getResult();
	virtual double calculate()=0;
};
#endif