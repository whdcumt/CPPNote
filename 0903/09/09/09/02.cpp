#include <iostream>
using namespace std;
//�����ṹ��
struct Test2   
{
	int x_;
	int y_;
	int z_;
	void Init(int x,int y,int z)//�ṹ���п��Ժ��г�Ա����
	{
		x_=x;                  //��������ֱ�Ӹ���ʵ��
		y_=y;                 //��Ȼ����Ҳ�������������ʵ��
		z_=z;
	}
	void Display()
	{ 
		cout<<"x="<<x_<<"  "<<"y="<<y_<<"  "<<"z="<<z_<<endl;
	}
};
class Test3
{  //����Ϊ������ṹ��Ĵ���
public:
	int x_;     
	int y_;
	int z_;
	void Init(int x,int y,int z)//�ṹ���п��Ժ��г�Ա����
	{
		x_=x;                  //��������ֱ�Ӹ���ʵ��
		y_=y;                 //��Ȼ����Ҳ�������������ʵ��
		z_=z;
	}
	void Display()
	{ 
		cout<<"x="<<x_<<"  "<<"y="<<y_<<"  "<<"z="<<z_<<endl;
	}
};
int main(void)
{
	//Test2  t;  //�ṹ��Ҳ��һ���࣬���Զ���ṹ����󣬲���Ҫ��ǰ���struct,��C�����У���Ҫ����struct
	//t.Init(5,6,3);//�ṹ��Ĭ���ǹ��еģ������ǿ��Է��ʵ�
	//t.Display();
	//Test2 t2 = {10,20,30};//���⻹����C���ԵĽṹ��ĳ�ʼ����ʽ��
	//t2.Display();
	Test3 t3={10,20,30};
	//t3.Init(10,20,30);
	t3.Display();
	return 0;
}
