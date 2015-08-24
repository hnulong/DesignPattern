#include "Operation.h"
#include "OperationAdd.h"
#include "OperationMinus.h"
#include <iostream>
using namespace std;

int main()
{
	Operation* op=new OperationAdd();//返回加方法
	op->op1=1;
	op->op2=2;
	cout<<op->getResult()<<endl;

	op=new OperationMinus();//返回减方法
	op->op1=1;
	op->op2=2;
	cout<<op->getResult()<<endl;

	system("pause");

	return 0;
}