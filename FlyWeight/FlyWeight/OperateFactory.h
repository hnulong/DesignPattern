#ifndef _OPERATEFACTORY_H_
#define _OPERATEFACTORY_H_
#include "Operation.h"
#include "OperationAdd.h"
#include "OperationMinus.h"
#include <map>
using namespace std;

class OperateFactory
{
public:
	 Operation* getOperate(char op);
private:
	map<char,Operation*> m;
};
#endif