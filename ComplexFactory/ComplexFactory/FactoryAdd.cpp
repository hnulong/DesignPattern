#include "FactoryAdd.h"

Operation* FactoryAdd::createOperate()
{
	return new OperationAdd();
}