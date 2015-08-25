#include <iostream>
#include "StringIterator.h"
#include "Iterator.h"
using namespace std;

int main()
{
	string str="fasdfafsa";
	Iterator* op=new StringIterator(str);
	while(op->hasNext())
		cout<<op->next()<<endl;

	delete op;

	system("pause");

	return 0;
}