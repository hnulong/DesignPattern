#include "Storage.h"

Memento* Storage::getMemo()
{
	return memo;
}

Storage::Storage()
{

}

Storage::Storage(Memento* m):memo(m)
{

}

void Storage::setMemo(Memento* memo)
{
	this->memo=memo;
}