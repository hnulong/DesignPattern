#ifndef _HANDLERA_H_
#define _HANDLERA_H_
#include <iostream>
#include "Handler.h"
using namespace std;

class HandlerA:public Handler
{
public:
	virtual void handle(int x);

};
#endif