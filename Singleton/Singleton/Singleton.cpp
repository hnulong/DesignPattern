#include "Singleton.h"

Singleton::Singleton()
{}

Singleton* Singleton::getSingleton()
{
	if(singleton==NULL)
		singleton=new Singleton();

	return singleton;
}