#include <iostream>
#include "FactoryAdd.h"
#include "FactoryMinus.h"
using namespace std;

int main()
{
	Factory* fa=new FactoryAdd();
	Operation* op=fa->createOperate();
	cout<<op->getResult()<<endl;
	//
	fa=new FactoryMinus();
	op=fa->createOperate();
	cout<<op->getResult()<<endl;

	system("pause");

	return 0;
}