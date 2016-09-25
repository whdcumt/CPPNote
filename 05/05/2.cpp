#include <iostream>
using namespace std;
//static_cast将精度较高的类型转换为精度较低的类型
int main(void)
{
	int n=static_cast<int>(3.14);
	cout<<"n="<<n<<endl;
    //********************************************
	//以下是将无类型指针void*转化为有类型指针
   void *p=&n;
   int *p2=static_cast<int*>(p);

	return 0;

}
