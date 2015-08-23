#include <iostream>
#include "OperationFactory.h"
using namespace std;

int main()
{
	OperationFactory* of=new OperationFactory();//新建一个工厂
	Operation* op=of->getOperation('-');//返回减方法
	op->op1=1;
	op->op2=2;
	cout<<op->getResult()<<endl;

	system("pause");

	return 0;
}