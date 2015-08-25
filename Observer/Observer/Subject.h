#ifndef _SUBJECT_H_
#define _SUBJECT_H_

class Subject
{
public:
	virtual void add(Operation *op)=0;
	virtual void del(Operation *op)=0;
	virtual void notifyAllObserver()=0;
};
#endif