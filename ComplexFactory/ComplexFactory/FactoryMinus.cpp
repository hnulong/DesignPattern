#include "FactoryMinus.h"

Operation* FactoryMinus::createOperate()
{
	return new OperationMinus();
}