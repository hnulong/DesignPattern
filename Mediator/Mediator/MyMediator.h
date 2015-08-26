#ifndef _MYMEDIATOR_H_
#define _MYMEDIATOR_H_
#include "Mediator.h"
#include "User.h"

class MyMediator:public Mediator
{
public:
	virtual void operate();
};
#endif