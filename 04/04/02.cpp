#include <iostream>
using namespace std;
//const������һ��ָ��const��������á�
int main(void)
{
	const int val=1024;
	const int& refval=val;
	//int&refval1=val; //Error:nonconst reference to a const object
	//refval=200; //refval����һ�����������ܸ�ֵ��
	//********************************************************************
	int val2=1024;   
	const int& refval2=val2;     //����һ��������Ȼ����һ��const����ָ����������ġ�
	cout<<"refval2="<<refval2<<endl; //const reference to non const object is permitted
	//refval2=100; //Error���������ܸ�ֵ
	//*********************************************************************  
	double val3=3.14;
	const int& refval3=val3;          //int temp=val3;
	                                  //const int& refval3=temp;
	cout<<"refval3="<<refval3<<endl;

	//************************************************
	int& refval4=val3;
	return 0;
}