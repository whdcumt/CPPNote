#include <iostream>
using namespace std;
#include<stdio.h>
#pragma pack(2)  //Ԥ�������4
struct Test
{ 
	char a;
	double b;
	char c;
};
#pragma pack()  //ȡ����������

//��һ����Ա������ṹ�������ƫ����Ϊ0
int main(void)
{
	 Test test;
	 //&test=&test.a;  //�ṹ�����test��test.a�ĵ�ַ�ǵȼ۵ġ�
	 char *p=(char *)&test;
	 //cout<<p<<endl;
	 printf("p=%p\n",p);
	 p=&test.a;
	 //cout<<p<<endl;
	  printf("p=%p\n",p);
	 cout<<sizeof(Test)<<endl;
	 return 0;
}