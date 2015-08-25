#include "HandlerA.h"

void HandlerA::handle(int x)
{
	if(x<1)
		cout<<"A"<<endl;
	else
		this->handler->handle(x);
}