//#pragma once  ��һ��������Ǳ���ͷ�ļ��ظ�������
//�ȼ��������#ifndef _CLOCK...,�ȼ��������仰��
//�Ƽ����ʹ���������ַ�ʽ���б�д�������и��õĿ���ֲ�ԡ�
#ifndef _CLOCK_H_
#define _CLOCK_H_
class Clock   //����Clock��
{             //������������Ա�����������Ϊ�������ݳ�Ա�������ԣ�
public:
	void Display(); //������ķ���Display()
	void Init(int hour,int minute,int second);//��ʼ����Ա����
	void Update();

	int GetHour();
	int GetMinute();
	int GetSecond();

	void SetHour(int hour);
	void SetMinute(int minute);
	void SetSecond(int second);
//public:  
private:  //�޸�Ϊ˽�еĺ󣬺�����������޷�ֱ�ӷ��ʣ�c.second_+=1;��Ҫ�ṩһ���ӿ�������˽�г�Ա
	   int hour_;  //��1�����������ԣ�2�����Ժ�����»��ߣ���Ϊ�淶
	   int minute_;
	   int second_;

};
#endif //_CLOCK_H_
