#ifndef _STRINGITERATOR_H_
#define _STRINGITERATOR_H_
#include "Iterator.h"
#include <string>
using namespace std;

class StringIterator:public Iterator
{
public:
	StringIterator(string &s);
	StringIterator();
	virtual char first();
	virtual char next();
	virtual bool hasNext();
private:
	string str;
	int index;
};
#endif