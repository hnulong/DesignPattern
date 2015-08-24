#include <iostream>
#include "OperationMinus.h"
using namespace std;

int main()
{
	Operation* op=new OperationMinus();
	cout<<op->getResult()<<endl;
	//
	op=op->clone();
	cout<<op->getResult()<<endl;

	system("pause");

	return 0;
}