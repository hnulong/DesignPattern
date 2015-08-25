#ifndef _MYSUBJECT_H_
#define _MYSUBJECT_H_
#include <vector>
#include <algorithm>
#include "Operation.h"
#include "Subject.h"
using namespace std;

class MySubject:public Subject
{
public:
	~MySubject();
	virtual void add(Operation *op);
	virtual void del(Operation *op);
	virtual void notifyAllObserver();
private:
	vector<Operation*> vec;
};
#endif