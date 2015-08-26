#ifndef _USER_H_
#define _USER_H_
#include "Mediator.h"
class Mediator;

class User
{
public:
	virtual void work()=0;
	void setMediator(Mediator *mediator);
protected:
	Mediator* m;
};
#endif