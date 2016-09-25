#include <iostream>
using namespace std;
//引用不是变量
//引用只是变量的别名
//引用没有自己独立的空间
//引用要和所引用的变量共享空间
//对引用变量的改变实际上是对它所引用的变量的改变
//注意：引用在定义的时候要初始化
//引用以一旦初始化，不得重新指向其他变量。
int main(void)
{
	int val=100;
	//int &refval; //Error：引用必须初始化
	int &refval=val;
	refval=200;  //将200赋值给refval这个引用，
	            //那么对引用所做的修改，就是对所引用的变量所做的修改。
	cout<<"val="<<val<<endl;
	cout<<"refval="<<refval<<endl;
	cout<<"*********************"<<endl;

	int val2=550;
	refval=val2; //这不代表将refval引用至val2变量
	             //仅仅只代表将refval赋值给refval
	             //这意味着改变的还是改变的refval引用的变量val
	cout<<"val="<<val<<endl;
	cout<<"refval="<<refval<<endl;
	return 0;
}