#include "Operation.h"
#include "OperationAdd.h"
#include "OperationMinus.h"
#include <iostream>
using namespace std;

int main()
{
	Operation* op=new OperationAdd();//���ؼӷ���
	op->op1=1;
	op->op2=2;
	cout<<op->getResult()<<endl;

	op=new OperationMinus();//���ؼ�����
	op->op1=1;
	op->op2=2;
	cout<<op->getResult()<<endl;

	system("pause");

	return 0;
}