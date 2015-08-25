#ifndef _OPERATIONADD_H_
#define _OPERATIONADD_H_
#include "Memento.h"

class OperationAdd
{
public:
	double getResult();
	Memento* createMemo();
	void restoreMemo(Memento *memo);
	void setOp(double val);
	OperationAdd(const double &x,const double &y);
	OperationAdd();
private:
	double op1,op2;
};
#endif