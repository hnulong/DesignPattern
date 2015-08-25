#ifndef _HANDLERB_H_
#define _HANDLERB_H_
#include <iostream>
#include "Handler.h"
using namespace std;

class HandlerB:public Handler
{
public:
	virtual void handle(int x);
};
#endif