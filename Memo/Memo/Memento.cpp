#include "Memento.h"

Memento::Memento():value(0)
{

}

Memento::Memento(double val):value(val)
{
}

double Memento::getValue()
{
	return value;
}

void Memento::setValue(double val)
{
	this->value=val;
}