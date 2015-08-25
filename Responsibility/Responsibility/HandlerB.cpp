#include "HandlerB.h"

void HandlerB::handle(int x)
{
	if(x<5)
		cout<<"B"<<endl;
	else
		cout<<"cannot handle"<<endl;
}