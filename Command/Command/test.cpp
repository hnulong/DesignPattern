#include <iostream>
#include "Command.h"
#include "Commander.h"
#include "Sodier.h"
#include "RealCommand.h"
using namespace std;

int main()
{
	Sodier* sodier=new Sodier();
	Command* op=new RealCommand(sodier);
	Commander* com=new Commander();
	com->invoke(op);
	com->action();

	delete sodier,op,com;

	system("pause");

	return 0;
}