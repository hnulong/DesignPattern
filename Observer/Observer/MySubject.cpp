#include "MySubject.h"

void MySubject::add(Operation *op)
{
	vec.push_back(op);
}

void MySubject::del(Operation *op)
{
	vec.erase(std::find(vec.begin(),vec.end(),op));
}

void MySubject::notifyAllObserver()
{
	for(auto tmp=vec.begin();tmp!=vec.end();tmp++)
		(*tmp)->update();
}

MySubject::~MySubject()
{/*
	for(auto tmp=vec.begin();tmp!=vec.end();tmp++)
		delete (*tmp);*/
}