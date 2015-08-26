#ifndef _USERA_H_
#define _USERA_H_
#include "User.h"
#include <iostream>
using namespace std;

class UserA:public User
{
public:
	virtual void work();
};
#endif