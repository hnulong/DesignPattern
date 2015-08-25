#ifndef _HANDLER_H_
#define _HANDLER_H_

class Handler
{
public:
	void setHandler(Handler *h);
	virtual void handle(int x)=0;

protected:
	Handler* handler;
};
#endif