#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//class Date
//{
//public:
//	//�Ǿ�̬�ĳ�Ա����
//	void f2()
//	{}
//
//	//��̬�ĳ�Ա����
//	static void f1()
//	{
//		f2();
//	}
//};

//��̬��Ա�����Ķ���
//int Date::_year = 2021;
//
//int main()
//{
//	Date d;
//	//����::��̬��Ա
//	Date::_year;
//	Date::Get_year();
//
//	//����.��̬��Ա
//	d._year;
//	d.Get_year();
//	return 0;
//}

//class Date
//{
//public:
//	//��̬�ĳ�Ա����
//	static void f2()
//	{}
//
//	//�Ǿ�̬�ĳ�Ա����
//	void f1()
//	{
//		f2();
//	}
//};

//class Date
//{
//public:
//	//����ʾ������ȫȱʡ��Ĭ�Ϲ��캯��������ȱʡֵ����һ���캯��Ϊ׼
//	/*Date(int year=20)
//	{
//		_year = year;
//	}*/
//
//	void Print()
//	{
//		cout << _year << endl;
//	}
//
//private:
//	//�Ǿ�̬��Ա�����������ڳ�Ա����ʱ��ȱʡֵ
//	int _year = 2019;
//};
//
//int main()
//{
//	//���������ϵͳ����Ĭ�Ϲ��캯��
//	//����˵��int���͵�_yearӦ�������ֵ
//	//������������ʱ������ȱʡֵ
//	Date d;
//	d.Print();
//	return 0;
//}

//class Date
//{
//public:
//	friend ostream& operator<<(ostream& out, Date& d);
//
//	//ostream& operator<<(Date* this, ostream& out)
//	/*ostream& operator<<(ostream& out)
//	{
//		out << _year;
//		*//*return out;*/
//	//}
//
//	//���캯��
//	Date(int year = 2021)
//	{
//		_year = year;
//	}
//
//private:
//	int _year;
//};
//
//ostream& operator<<(ostream& out, Date& d)
//{
//	out << d._year;
//	return out;
//}
//
//int main()
//{
//	Date d1;
//	cout << d1;
//	return 0;
//}
//
////�ⲿ��
//class A
//{
//private:
//	static int k;
//	int h;
//
//public:
//	//�ڲ���
//	class B
//	{
//	public:
//		void foo(const A& a)
//		{
//			//�ڲ������ֱ�ӷ����ⲿ��ĳ�Ա
//			cout << k << endl;//OK
//			cout << a.h << endl;//OK
//		}
//	};
//};