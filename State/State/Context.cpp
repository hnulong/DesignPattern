#include "Context.h"

Context::Context(Operation* op):operation(op)
{

}

Context::Context()
{

}

void Context::setOperation(Operation* operation)
{
	this->operation=operation;
}

Operation*  Context::getOperation()
{
	return operation;
}
void Context::operate()
{
	operation->operate();
}