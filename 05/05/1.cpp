#include <iostream>
using namespace std;
void fun(int &val)
{
   cout<<"fun="<<val<<endl;
}
int main(void)
{
	const int val=100;               //val是一个常量
	//int n =const_cast<int>(val);    //const_cast的第一个功能是移除常量性
                                   //也就是将常量转变为变量，这明显是矛盾的
	                              //除非我们定义一个新的变量n,来接受它
	                              //这个时候n和val本身没有任何关系，也就是说val还是不可改变
	                              //所以说移除变量的常量性没有任何的意义，既然没有任何意义
	                              //所以编译就会出错：无法将“const int”转换为“int”
	int n=val; //但是这是可以的，这表示将val里面的值赋值给n变量，不涉及任何的类型的转换
	//**************************************************************************************
	//int *p=&val;//我们应知道&val它的类型应该是const int *,Error无法将const int *转换为 int *
	int *p=const_cast<int *>(&val);//用const_cast进行去常量化
	*p=200;//指针所指向的对象的内容修改为200，那么这个指针所指向对象是否是val呢？val是个常量，是不可被更改的
	        //如果这个地方被更改了话，就颠覆了我们之前所学的知识，常量是不可被更改的。
	        //编译时可以通过的，接下来我们打印输出val，看一下他的值是否发生改变
	cout<<"val="<<val<<endl;
	//我们可以打印一下*p的地址和val的地址，看一下*p是否是指向val这个地址的
	cout<<"*p地址="<<p<<endl;
	cout<<"val地址="<<&val<<endl;
	//***************************************************************************************
	//const_cast去除引用的例子以下是引用的例子
	const int val2=200;
	//int& refval2=val2;  //我们知道非const的引用不能指向const引用
	                    //所以我们需要去掉这个常量性
	int& refval2=const_cast<int&>(val2); //用const_cast更改常量性
	refval2=300; //一样的我们对这个引用重新赋值
	cout<<"val2="<<val2<<endl;
	//**************************************************************************************
	//演示const_cast并不是修改其内容，而是接受实际的参数
	fun(const_cast<int&>(val2)); //可以看到前面fun()是接受非const引用，但是我们这边要传递一个const对象进去
	return 0;
}