
//�������˵��������Ϊ��������
#include <iostream>
using namespace std;
void swap(int &x,int &y);
int main(void)
{
	int a,b;
	a=10,b=15;
	swap(a,b);
	cout<<"a="<<a<<"b="<<b<<endl;
	return 0;
}
void swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}