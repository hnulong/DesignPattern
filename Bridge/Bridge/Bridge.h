#ifndef _BRIDGE_H_
#define _BRIDGE_H_
#include "Operation.h"

class Bridge
{
public:	
	virtual void operate();
	virtual void setOperate(Operation *op);
	virtual Operation* getOperate();
private:
	Operation* operation;
};
#endif