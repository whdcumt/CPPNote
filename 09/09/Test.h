#ifndef _TEST_H_
#define _TEST_H_
class Test
{
	public: //����������������ַ�ʽ
		int add(int a,int b)//��������Ҫ���ú�������Ϊ�����ģ�������ʱ����Բ�����inline�ؼ��֣�������ʵ�ֵ�ʱ�����inline�ؼ���
		{                   //��һ�����������ķ�ʽ���������ʵ�ִ��룬���ӹؼ���inline,��һ�������������ʵ�֣����ü�inline�ؼ���
			return a+b;    //��ʹ����û�м�inline�ؼ��֣���Ҳ��������
		}
		//�����Ա�����ĳ�ʼ������
		//���ĸ���ʼ�������͹��������أ���������ͬ��������ͬ������Ϊ���ǵ�����������ͬ�ģ���Ϊ���Ƕ�������ͬ������
		//void Init();             
		//void Init(int x);
		//void Init(int x,int y);
		//void Init(int x,int y,int z);*/
		//ǰ�����ص��ĸ���ʼ������������дΪ�������
		void Init(int x=0,int y=0,int z=0);
		//��ʾ������Ա����
		void Display();
    private:      //�����������ݳ�Ա��û��ʵ�ʵ����壬��������
		int x_;
		int y_;
		int z_;
};
#endif //_TEST_H_