#include "StringIterator.h"

StringIterator::StringIterator(string &s):index(-1),str(s)
{}

StringIterator::StringIterator():index(-1)
{}

char StringIterator::first()
{
	return str[0];
}

char StringIterator::next()
{
	if(++index<str.size())
		return str[index];
}

bool StringIterator::hasNext()
{
	return index+1<str.size()?true:false;
}