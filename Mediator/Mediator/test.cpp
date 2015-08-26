#include <iostream>
#include "MyMediator.h"
#include "UserA.h"
using namespace std;

int main()
{
	Mediator* op=new MyMediator();
	User* build=new UserA();
	op->setUser(build);
	build->setMediator(op);
	build->work();

	delete op,build;

	system("pause");

	return 0;
}