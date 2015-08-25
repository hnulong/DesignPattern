#include "Bridge.h"

Operation *Bridge::getOperate()
{
	return this->operation;
}

void Bridge::operate()
{
	operation->operateA();
}

void Bridge::setOperate(Operation *op)
{
	this->operation=op;
}