#include "OperateBuilder.h"

OperateBuilder::OperateBuilder()
{

}

OperateBuilder::OperateBuilder(Operation *op):operate(op)
{

}

OperateBuilder::~OperateBuilder()
{
	if(operate!=0)
		delete operate;
}

void OperateBuilder::build()
{
	operate->operateA();
	operate->operateB();
}