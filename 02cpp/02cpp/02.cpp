#include <iostream>
using namespace std;
int main(void)
{
	//const int a;   //Error1:编译会出错，要求必须初始化常量对象
	const int a=115;
	//a=152;        //Error2:常量的值是不能被更改的。
	int b=58;
	const int *p;   //const在*号左边，表示*p为常量，经由*p不能修改指针所指向的内容，这里const 和int位置可以对调
	//*p=200;      //Error3:常量不能被重新赋值

	//第二种情况
	//int * const p2;//const在*号的右边，表示const是修饰的p2变量，表示p2是一个常量,所以必须初始化 Error4必须初始化 
	int * const p2=&b;//初始化，指向b,因为p2是常量，所以初识化后也不能重新指向了。
   int c=12;
	//p2=&c;  Error5:常量不能被重新赋值
   //但是*p2并不是常量，是可以赋值的，也就是说可以更改p2所指向的内容
   *p2=123;
   cout<<b<<endl;
	return 0;
}
