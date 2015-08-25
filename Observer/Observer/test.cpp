#include <iostream>
#include "MySubject.h"
#include "OperationAdd.h"
#include "OperationMinus.h"
using namespace std;

int main()
{
	Operation* op1=new OperationAdd();
	Operation* op2=new OperationMinus();
	Subject* subject=new MySubject();
	subject->add(op1);
	subject->add(op2);
	subject->notifyAllObserver();
	//
	subject->del(op2);
	subject->notifyAllObserver();

	delete op1,op2,subject;

	system("pause");

	return 0;
}