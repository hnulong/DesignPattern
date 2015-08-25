#include <iostream>
#include "MyBridge.h"
#include "OperationAdd.h"
#include "OperationMinus.h"
using namespace std;

int main()
{
	Operation* op=new OperationAdd();
	Bridge* build=new MyBridge();
	build->setOperate(op);
	build->operate();
	//
	op=new OperationMinus();
	build->setOperate(op);
	build->operate();
	delete build;

	system("pause");

	return 0;
}