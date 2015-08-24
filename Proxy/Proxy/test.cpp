#include <iostream>
#include "OperationProxy.h"
#include "OperationAdd.h"
using namespace std;

int main()
{
	Operation* op=new OperationProxy();
	cout<<op->getResult()<<endl;
	//
	OperationAdd* add=new OperationAdd();
	add->op1=1;
	add->op2=2;
	op=new OperationProxy(*add);
	cout<<op->getResult()<<endl;

	system("pause");

	return 0;
}