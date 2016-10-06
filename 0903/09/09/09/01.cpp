#include "Test.h"
#include "iostream"
int main(void)
{
	Test t; //定义一个Test对象
	t.Init();//成员变量初始化,默认值成员变量
	t.Display();//显示成员变量
	t.Init(5); //初始化一个参数的初始化函数
	t.Display();
	t.Init(2,5);//初始化两个参数的初始化函数
	t.Display();
	t.Init(6,3,7);//全部参数都初始化的函数
	t.Display();
	return 0;
}
