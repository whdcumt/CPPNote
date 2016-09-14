#include <iostream>
using namespace std;
int main(void)
{
	bool result;
	//result=true;
	result=100; //会出现截断警告，因为int占4个字节，而布尔占一个字节
	cout<<result<<endl;
	return 0;
}