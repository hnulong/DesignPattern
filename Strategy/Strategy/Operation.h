#ifndef _OPERATION_H_
#define _OPERATION_H_
/*
	����ģʽ�ľ���Ȩ���û���ϵͳ�����ṩ��ͬ�㷨��ʵ�֣���������ɾ���㷨��
	�Ը����㷨����װ����ˣ�����ģʽ�������㷨����ϵͳ�У��ⲿ�û�ֻ��Ҫ�������ĸ��㷨���ɡ�
	ע�⣺����빤��ģʽ��ͬ������ģʽ�ľ���Ȩ�ڹ������������û�
*/
class Operation
{
public:
	virtual double getResult()=0;
public:
	double op1,op2;
};
#endif