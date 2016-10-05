#ifndef _TEST_H_
#define _TEST_H_
class Test
{
	public: //定义成内联的有两种方式
		int add(int a,int b)//假设我们要将该函数定义为内联的，声明的时候可以不给出inline关键字，可以在实现的时候给出inline关键字
		{                   //第一种内联函数的方式在类外给出实现代码，并加关键字inline,这一种是在类里给出实现，不用加inline关键字
			return a+b;    //即使我们没有加inline关键字，它也是内联的
		}
		//定义成员变量的初始化函数
		//这四个初始化函数就构成了重载（函数名相同，参数不同），因为他们的作用域是相同的，因为他们都是在相同的类中
		//void Init();             
		//void Init(int x);
		//void Init(int x,int y);
		//void Init(int x,int y,int z);*/
		//前面重载的四个初始化函数，可以写为下面这句
		void Init(int x=0,int y=0,int z=0);
		//显示三个成员变量
		void Display();
    private:      //定义三个数据成员，没有实际的意义，举例而已
		int x_;
		int y_;
		int z_;
};
#endif //_TEST_H_