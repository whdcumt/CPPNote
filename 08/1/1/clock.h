//#pragma once  这一句的作用是避免头文件重复包含，
//等价于下面的#ifndef _CLOCK...,等价下面三句话，
//推荐大家使用下面这种方式进行编写，他具有更好的可移植性。
#ifndef _CLOCK_H_
#define _CLOCK_H_
class Clock   //声明Clock类
{             //类内声明：成员函数（类的行为）和数据成员（类属性）
public:
	void Display(); //定义类的方法Display()
	void Init(int hour,int minute,int second);//初始化成员函数
	void Update();

	int GetHour();
	int GetMinute();
	int GetSecond();

	void SetHour(int hour);
	void SetMinute(int minute);
	void SetSecond(int second);
//public:  
private:  //修改为私有的后，后面的主函数无法直接访问：c.second_+=1;需要提供一个接口来访问私有成员
	   int hour_;  //（1）声明类属性（2）属性后面加下划线，作为规范
	   int minute_;
	   int second_;

};
#endif //_CLOCK_H_
