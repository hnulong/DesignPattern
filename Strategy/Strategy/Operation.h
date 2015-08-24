#ifndef _OPERATION_H_
#define _OPERATION_H_
/*
	策略模式的决定权在用户，系统本身提供不同算法的实现，新增或者删除算法，
	对各种算法做封装。因此，策略模式多用在算法决策系统中，外部用户只需要决定用哪个算法即可。
	注意：这点与工厂模式不同，工厂模式的决定权在工厂，而不是用户
*/
class Operation
{
public:
	virtual double getResult()=0;
public:
	double op1,op2;
};
#endif