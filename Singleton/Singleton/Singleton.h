#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include <iostream>

class Singleton
{
public:
	Singleton();
	Singleton* getSingleton();
private:
	Singleton* singleton;
};
#endif