#include <iostream>
using namespace std;
int var=100; //定义一个全局变量
int main(void)
{
	int var=50;//同时定义一个同名局部变量
	cout<<var<<endl;//由于局部变量它的值覆盖了全局变量，所以它的输出值应该是50.
	cout<<::var<<endl;//输出全局变量的值
	return 0;
}