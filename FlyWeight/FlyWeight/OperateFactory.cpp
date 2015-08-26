#include "OperateFactory.h"

Operation* OperateFactory::getOperate(char op)
{
	if(m.find(op)==m.end())
	{
		switch(op)
		{
		case '+':
			cout<<"create add:"<<endl;
			m[op]=new OperationAdd();
			break;
		case '-':
			cout<<"create minus:"<<endl;
			m[op]=new OperationMinus();
			break;
		}
		
	}

	return m[op];
}