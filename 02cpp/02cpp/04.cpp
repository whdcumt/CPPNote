#include <iostream>
using namespace std;
#include<stdio.h>
#pragma pack(2)  //预设对齐数4
struct Test
{ 
	char a;
	double b;
	char c;
};
#pragma pack()  //取消对齐设置

//第一个成员变量与结构体变量的偏移量为0
int main(void)
{
	 Test test;
	 //&test=&test.a;  //结构体变量test和test.a的地址是等价的。
	 char *p=(char *)&test;
	 //cout<<p<<endl;
	 printf("p=%p\n",p);
	 p=&test.a;
	 //cout<<p<<endl;
	  printf("p=%p\n",p);
	 cout<<sizeof(Test)<<endl;
	 return 0;
}