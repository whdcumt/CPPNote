#include <iostream>
using namespace std;
int main(void)
{
	//const int a;   //Error1:��������Ҫ������ʼ����������
	const int a=115;
	//a=152;        //Error2:������ֵ�ǲ��ܱ����ĵġ�
	int b=58;
	const int *p;   //const��*����ߣ���ʾ*pΪ����������*p�����޸�ָ����ָ������ݣ�����const ��intλ�ÿ��ԶԵ�
	//*p=200;      //Error3:�������ܱ����¸�ֵ

	//�ڶ������
	//int * const p2;//const��*�ŵ��ұߣ���ʾconst�����ε�p2��������ʾp2��һ������,���Ա����ʼ�� Error4�����ʼ�� 
	int * const p2=&b;//��ʼ����ָ��b,��Ϊp2�ǳ��������Գ�ʶ����Ҳ��������ָ���ˡ�
   int c=12;
	//p2=&c;  Error5:�������ܱ����¸�ֵ
   //����*p2�����ǳ������ǿ��Ը�ֵ�ģ�Ҳ����˵���Ը���p2��ָ�������
   *p2=123;
   cout<<b<<endl;
	return 0;
}
