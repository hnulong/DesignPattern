#include "OperationFactory.h"

Operation* OperationFactory::getOperation(char opCode)
{
		switch(opCode)
		{
		case '+':
			operation=new OperationAdd();
			break;
		case '-':
			operation=new OperationMinus();
			break;
		}

		return operation;
}
