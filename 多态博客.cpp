#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

// ��������
// int a,b;
//int Add(int a, int b)
//{
//	return a+b;
//}
//// string s1,s2;
//string Add(string s1, string s2)
//{
//	return s1 + s2;
//}

//class Person
//{
//public:
//	virtual ~Person()
//	{
//		// ����Person����������
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual ~Student()
//	{
//		// ������ֻ��д����Student�������ݵ��߼�
//		// ���ڼ̳�������Person������ݸú�����������������Զ�����Person�������������������
//	}
//};



//class Derive : public Base
//{};
//
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��ͨ�� - ȫ��" << endl;
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "ѧ�� - ���" << endl;
//	}
//};

class Base
{
public:
	Base(int num)
		:_num(num)
	{}

	virtual void Fun1()
	{}

	virtual void Fun2()
	{}
private:
	int _num;
};

int main()
{
	Base b(2);

	return 0;
}
