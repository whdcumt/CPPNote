#include <iostream>
using namespace std;
int main(void)
{
	//int *p=new int;      //分配一个整数空间，也就是4个字节
	int *p=new int(33);      //分配一个整数空间，也就是4个字节,并给定一个初始值33
	cout<<*p<<endl;      //输出内容是随机的，不确定的。
	int *p2=new int[10]; //分配连续的10个整数空间，也就是40个字节，那么这40个字节里面的内容也是随机的
	delete p;    //销毁自己创建的堆栈空间
	delete[] p2; //销毁自己创建的数组堆栈空间，注意中括号，如果不带中括号，销毁的结果是不确定的
	return 0;
}