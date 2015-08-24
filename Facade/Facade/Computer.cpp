#include "Computer.h"

void Computer::startup()
{
	cout<<"computer start!"<<endl;
	disk.startup();
	memory.startup();
}