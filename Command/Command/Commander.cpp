#include "Commander.h"

void Commander::action()
{
	cmd->execute();
}

void Commander::invoke(Command* cmd)
{
	this->cmd=cmd;
}