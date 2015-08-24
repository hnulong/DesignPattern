#ifndef _COMPUTER_H_
#define _COMPUTER_H_
#include "Disk.h"
#include "Memory.h"
#include <iostream>
using namespace std;

class Computer
{
public:
	void startup();
private:
	Disk disk;
	Memory memory;
};
#endif