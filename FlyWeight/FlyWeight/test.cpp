#include <iostream>
#include "OperateFactory.h"
#include "OperationAdd.h"
#include "OperationMinus.h"
using namespace std;

int main()
{
	OperateFactory* build=new OperateFactory();
	Operation* op=build->getOperate('+');
	op->getResult();
	cout<<"======="<<endl;
	op->getResult();

	delete op,build;

	system("pause");

	return 0;
}