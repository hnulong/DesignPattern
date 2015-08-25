#include <iostream>
#include "Storage.h"
#include "OperationAdd.h"
using namespace std;

int main()
{
	OperationAdd* op=new OperationAdd();
	Storage *st=new Storage(op->createMemo());
	cout<<op->getResult()<<endl;
	op->setOp(5);
	cout<<op->getResult()<<endl;
	op->restoreMemo(st->getMemo());
	cout<<op->getResult()<<endl;

	delete op,st;

	system("pause");

	return 0;
}