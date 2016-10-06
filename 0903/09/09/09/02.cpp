#include <iostream>
using namespace std;
//声明结构体
struct Test2   
{
	int x_;
	int y_;
	int z_;
	void Init(int x,int y,int z)//结构体中可以含有成员函数
	{
		x_=x;                  //这里我们直接给出实现
		y_=y;                 //当然我们也可以在外面给出实现
		z_=z;
	}
	void Display()
	{ 
		cout<<"x="<<x_<<"  "<<"y="<<y_<<"  "<<"z="<<z_<<endl;
	}
};
class Test3
{  //以下为拷贝这结构体的代码
public:
	int x_;     
	int y_;
	int z_;
	void Init(int x,int y,int z)//结构体中可以含有成员函数
	{
		x_=x;                  //这里我们直接给出实现
		y_=y;                 //当然我们也可以在外面给出实现
		z_=z;
	}
	void Display()
	{ 
		cout<<"x="<<x_<<"  "<<"y="<<y_<<"  "<<"z="<<z_<<endl;
	}
};
int main(void)
{
	//Test2  t;  //结构体也是一种类，可以定义结构体对象，不需要在前面加struct,在C语言中，需要加上struct
	//t.Init(5,6,3);//结构体默认是公有的，所以是可以访问的
	//t.Display();
	//Test2 t2 = {10,20,30};//另外还可用C语言的结构体的初始化方式。
	//t2.Display();
	Test3 t3={10,20,30};
	//t3.Init(10,20,30);
	t3.Display();
	return 0;
}
