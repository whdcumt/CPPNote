
//这个例子说明引用作为函数返回值(返回局部变量的例子，错误的例子，无法返回局部局部变量)
#include <iostream>
using namespace std;
int& add(int a,int b)
{
	 int sum;
	 sum=a+b;
	 return sum;
}
int main(void)
{
	int n=add(3,4);
	int& n2=add(5,6); //n2是引用，没有自己独立的地址空间
	                  //所以n2依赖于它所引用的变量。
	                  //如果n2所引用的变量，生命期已经结束了，也就是说n2是一个无效的引用。
	                 //那么n2的值将是不确定的。
	cout<<"n="<<n<<endl;
	cout<<"n2="<<n2<<endl;
	return 0;
}
