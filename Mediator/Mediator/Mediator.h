#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_
#include "User.h"
class User;

class Mediator
{
public:
	virtual void operate()=0;
	void setUser(User *u);
protected:
	User *user;
};
#endif