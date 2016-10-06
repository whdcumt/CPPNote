#include "Test.h"
#include "iostream"
using namespace std;
//inline int Test::add(int a,int b)  //这是一种内联函数的定义方式  //第二种定义方式是直接在类中给出实现代码
//{
//	return a+b;
//}
//以下是四个成员变量初始化函数的实现
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
void Test::Init(int x/*=0*/,int y/*=0*/,int z/*=0*/)  //这里缺省值不需要给定，这是VC助手的自动功能，这里没有安装，人工添加的，有与没有没有关系
{
	x_=x;
	y_=y;
	z_=z;
}
void Test::Display()
{
	cout<<"x_="<<x_<<" "<<"y_="<<y_<<" "<<"z_="<<z_<<endl;
}