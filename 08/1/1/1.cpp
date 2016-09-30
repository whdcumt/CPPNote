#include "clock.h"
int main(void)
{
	Clock c;     //定义一个对象：前面我们已经创建了类，我们可以把类看成一种类型,类是抽象的，对象是具体的
	c.Init(10,20,15);//初始化
	c.Display();//将它打印出来
	//假设现在过了1s
	c.Update();
	//然后再把它显示出来
	c.Display();
	//如果我们想直接更改私有成员的话，肯定是不可以的
	c.SetHour(15);
	c.Display();
	return 0;
}