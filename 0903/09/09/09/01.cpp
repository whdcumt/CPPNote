#include "Test.h"
#include "iostream"
int main(void)
{
	Test t; //����һ��Test����
	t.Init();//��Ա������ʼ��,Ĭ��ֵ��Ա����
	t.Display();//��ʾ��Ա����
	t.Init(5); //��ʼ��һ�������ĳ�ʼ������
	t.Display();
	t.Init(2,5);//��ʼ�����������ĳ�ʼ������
	t.Display();
	t.Init(6,3,7);//ȫ����������ʼ���ĺ���
	t.Display();
	return 0;
}
