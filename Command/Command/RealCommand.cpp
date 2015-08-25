#include "RealCommand.h"


RealCommand::RealCommand(Sodier* s):sodier(s)
{
}

void RealCommand::execute()
{
	sodier->action();
}