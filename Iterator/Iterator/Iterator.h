#ifndef _ITERATOR_H_
#define _ITERATOR_H_

class Iterator
{
public:
	virtual char first()=0;
	virtual char next()=0;
	virtual bool hasNext()=0;
};
#endif