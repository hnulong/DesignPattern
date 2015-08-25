#ifndef _REALCOMMAND_H_
#define _REALCOMMAND_H_
#include "Command.h"
#include "Sodier.h"

class RealCommand:public Command
{
public:
	virtual void execute();
	RealCommand(Sodier* s);
private:
	Sodier* sodier;
};
#endif