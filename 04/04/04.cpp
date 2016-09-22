
//这个例子说明引用作为函数返回值
#include <iostream>
using namespace std;
int a[]={0,1,2,3,4};
int& index(int i)
{
	return a[i];
}
int main(void)
{
	index(3)=100; //引用作为函数返回值，使得函数可以放在赋值运算符的左边
	              //函数返回引用，引用在函数返回的时候初始化。
	             //也就是说index(3)这个引用在函数返回的时候初始化，
	             //也就是说引用index(3)被初始化为a[3]
	             //那么对index(3)这个引用所做的改变（赋值100）,也就是对a[3]赋值100.

	cout<<"a[3]="<<a[3]<<endl; 
	return 0;
}
