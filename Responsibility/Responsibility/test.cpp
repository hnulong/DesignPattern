#include <iostream>
#include "HandlerA.h"
#include "HandlerB.h"
using namespace std;

int main()
{
	Handler* op=new HandlerA();
	Handler* build=new HandlerB();
	op->setHandler(build);
	op->handle(10);
	op->handle(0);
	op->handle(3);

	delete op,build;

	system("pause");

	return 0;
}