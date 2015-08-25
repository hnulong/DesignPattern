#include <iostream>
#include "OperationAdapter.h"
#include "OperationAdd.h"
using namespace std;

int main()
{
	Operation* op=new OperationAdapter();
	op->operate();
	delete op;

	system("pause");

	return 0;
}