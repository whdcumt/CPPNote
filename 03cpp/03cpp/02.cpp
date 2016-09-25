#include <iostream>
using namespace std;
void fun(int a,int b)
{ 
	cout<<"int fun"<<endl;
}
void fun(double a,double b)
{ 
	cout<<"double fun"<<endl;
}
extern  "C" void fun(int a)
{
	cout<<"xxx"<<endl;
}
extern  "C" void fun2(double a)
{
	cout<<"yyy"<<endl;
}

int main(void)
{
	fun(3,4);
	fun(3.0,4.4);
	fun(1);
	return 0;
}