#include "Test.h"
#include "iostream"
using namespace std;
//inline int Test::add(int a,int b)  //����һ�����������Ķ��巽ʽ  //�ڶ��ֶ��巽ʽ��ֱ�������и���ʵ�ִ���
//{
//	return a+b;
//}
//�������ĸ���Ա������ʼ��������ʵ��
//void Test::Init()
//{
//	x_=0;
//	y_=0;
//	z_=0;
//}
//void Test::Init(int x)
//{
//	x_=x;
//	y_=0;
//	z_=0;
//}
//void Test::Init(int x,int y)
//{
//	x_=x;
//	y_=y;
//	z_=0;
//}
//void Test::Init(int x,int y,int z)
//{
//	x_=x;
//	y_=y;
//	z_=z;
//}
void Test::Init(int x/*=0*/,int y/*=0*/,int z/*=0*/)  //����ȱʡֵ����Ҫ����������VC���ֵ��Զ����ܣ�����û�а�װ���˹���ӵģ�����û��û�й�ϵ
{
	x_=x;
	y_=y;
	z_=z;
}
void Test::Display()
{
	cout<<"x_="<<x_<<" "<<"y_="<<y_<<" "<<"z_="<<z_<<endl;
}