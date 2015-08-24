#include "OperationProxy.h"

OperationProxy::OperationProxy()
{
	operation=new OperationAdd();
}

OperationProxy::OperationProxy(const OperationAdd &add)
{
	operation=new OperationAdd(add);
}

double OperationProxy::getResult()
{
	return operation->getResult();
}