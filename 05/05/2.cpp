#include <iostream>
using namespace std;
//static_cast�����Ƚϸߵ�����ת��Ϊ���Ƚϵ͵�����
int main(void)
{
	int n=static_cast<int>(3.14);
	cout<<"n="<<n<<endl;
    //********************************************
	//�����ǽ�������ָ��void*ת��Ϊ������ָ��
   void *p=&n;
   int *p2=static_cast<int*>(p);

	return 0;

}
