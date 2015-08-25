#ifndef _CONTEXT_H_
#define _CONTEXT_H_
#include "Operation.h"

class Context
{
public:
	Context(Operation* operation);
	Context();
	void setOperation(Operation* operation);
	Operation* getOperation();
	void operate();
private:
	Operation* operation;
};
#endif