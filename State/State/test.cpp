#include <iostream>
#include "Context.h"
#include "OperationAdd.h"
#include "OperationMinus.h"
using namespace std;

int main()
{
	Operation* op=new OperationAdd();
	Context* context=new Context(op);
	context->operate();
	delete op;
	op=new OperationMinus();
	context->setOperation(op);
	context->operate();
	delete op;
	delete context;

	system("pause");

	return 0;
}