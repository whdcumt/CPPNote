#include <iostream>
using namespace std;
int var=100; //����һ��ȫ�ֱ���
int main(void)
{
	int var=50;//ͬʱ����һ��ͬ���ֲ�����
	cout<<var<<endl;//���ھֲ���������ֵ������ȫ�ֱ����������������ֵӦ����50.
	cout<<::var<<endl;//���ȫ�ֱ�����ֵ
	return 0;
}