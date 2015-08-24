#include <iostream>
#include "OperationDecorate.h"
#include "OperationAdd.h"
using namespace std;

int main()
{
	Operation* op=new OperationAdd();
	op->op1=1;
	op->op2=2;
	OperationDecorate *od=new OperationDecorate(op);
	cout<<od->getResult()<<endl;

	system("pause");

	return 0;
}