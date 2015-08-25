#ifndef _OPERATIONBUILDER_H_
#define _OPERATIONBUILDER_H_
#include "Operation.h"

class OperateBuilder
{
public:
	OperateBuilder();
	OperateBuilder(Operation *op);
	~OperateBuilder();
	void build();
private:
	Operation *operate;
};
#endif