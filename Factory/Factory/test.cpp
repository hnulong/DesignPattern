#include <iostream>
#include "OperationFactory.h"
using namespace std;

int main()
{
	OperationFactory* of=new OperationFactory();//�½�һ������
	Operation* op=of->getOperation('-');//���ؼ�����
	op->op1=1;
	op->op2=2;
	cout<<op->getResult()<<endl;

	system("pause");

	return 0;
}