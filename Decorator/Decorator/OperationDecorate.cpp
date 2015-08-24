#include "OperationDecorate.h"

OperationDecorate::OperationDecorate(Operation *op):operation(op)
{
	
}

double OperationDecorate::getResult()
{
	print();
	return this->operation->getResult();
}

void OperationDecorate::print()
{
	cout<<"���װ�Σ�"<<endl;
}