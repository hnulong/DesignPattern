#ifndef _MEMOTO_H_
#define _MEMOTO_H_

class Memento
{
public:
	double getValue();
	void setValue(double val);
	Memento();
	Memento(double val);
private:
	double value;
};
#endif