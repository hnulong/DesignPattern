#ifndef _COMMANDER_H_
#define _COMMANDER_H_
#include "Command.h"

class Commander
{
public:
	void action();
	void invoke(Command* cmd);
private:
	Command* cmd;
};
#endif