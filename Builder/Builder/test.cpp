#include <iostream>
#include "OperateBuilder.h"
#include "OperationAdd.h"
#include "OperationMinus.h"
using namespace std;

int main()
{
	Operation* op=new OperationAdd();
	OperateBuilder* build=new OperateBuilder(op);
	build->build();
	delete build;
	op=new OperationMinus();
	build=new OperateBuilder(op);
	build->build();
	delete build;

	system("pause");

	return 0;
}