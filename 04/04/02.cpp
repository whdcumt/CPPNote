#include <iostream>
using namespace std;
//const引用是一个指向const对象的引用。
int main(void)
{
	const int val=1024;
	const int& refval=val;
	//int&refval1=val; //Error:nonconst reference to a const object
	//refval=200; //refval它是一个常量，不能赋值。
	//********************************************************************
	int val2=1024;   
	const int& refval2=val2;     //定义一个变量，然后用一个const引用指向它是允许的。
	cout<<"refval2="<<refval2<<endl; //const reference to non const object is permitted
	//refval2=100; //Error：常量不能赋值
	//*********************************************************************  
	double val3=3.14;
	const int& refval3=val3;          //int temp=val3;
	                                  //const int& refval3=temp;
	cout<<"refval3="<<refval3<<endl;

	//************************************************
	int& refval4=val3;
	return 0;
}