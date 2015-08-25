#ifndef _STORAGE_H_
#define _STORAGE_H_
#include "Memento.h"

class Storage
{
public:
	Memento* getMemo();
	void setMemo(Memento *memo);
	Storage(Memento* memo);
	Storage();
private:
	Memento* memo;
};
#endif