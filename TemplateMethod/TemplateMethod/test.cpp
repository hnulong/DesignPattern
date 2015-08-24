#include <iostream>
#include "OperationAdd.h"
using namespace std;

int main()
{
	Operation* op=new OperationAdd();
	op->getResult();
	//
	system("pause");
	delete op;

	return 0;
}