#include <iostream>
using namespace std;
//���ò��Ǳ���
//����ֻ�Ǳ����ı���
//����û���Լ������Ŀռ�
//����Ҫ�������õı�������ռ�
//�����ñ����ĸı�ʵ�����Ƕ��������õı����ĸı�
//ע�⣺�����ڶ����ʱ��Ҫ��ʼ��
//������һ����ʼ������������ָ������������
int main(void)
{
	int val=100;
	//int &refval; //Error�����ñ����ʼ��
	int &refval=val;
	refval=200;  //��200��ֵ��refval������ã�
	            //��ô�������������޸ģ����Ƕ������õı����������޸ġ�
	cout<<"val="<<val<<endl;
	cout<<"refval="<<refval<<endl;
	cout<<"*********************"<<endl;

	int val2=550;
	refval=val2; //�ⲻ����refval������val2����
	             //����ֻ����refval��ֵ��refval
	             //����ζ�Ÿı�Ļ��Ǹı��refval���õı���val
	cout<<"val="<<val<<endl;
	cout<<"refval="<<refval<<endl;
	return 0;
}