#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date* operator&()
//	{
//		return nullptr;
//	}
//
//	const Date* operator&()const
//	{
//		return nullptr;
//	}
//private:
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
//};
//
//int main()
//{
//
//	return 0;
//}

//class Date
//{
//public:
//	void f1()//->void f1(Date* this)
//	{
//
//
//
//		f2();//void f2(const Date* this)
//	}
//
//	void f2() const//void f2(const Date* this)
//	{}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	////����һ���������const����
//	//const Date d1;
//	////const������÷�const��Ա����
//	//d1.Print();
//	////������ת��Ϊ��d1.Print(const Date* &d1)
//
//	return 0;
//}
//
//class Date
//{
//public:
//	void Print() const //�����������void Print(const Date* this)
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();//->d1.Print(Date* &d1);
//	return 0;
//}

#include <iostream>
using namespace std;

class A
{
public:
	A() { ++_scount; }
	A(const A& t) { ++_scount; }
	static int GetACount();
private:
	static int _scount;
};

int A::GetACount()
{
	return _scount;
}

int main()
{

	return 0;
}

class A
{
public:
	//...
private:
	static int _a;
};

//��ȷ�ض��巽��
int A::_a = 10;

int main()
{
	//���󣬲�����main�����ڲ�����
	int A::_a = 10;
	return 0;
}
//
//int main()
//{
//	//��������ʹ��
//	//explicit Date d = 2019;//ʵ�ʱ������������2019����һ�������������������ʱ����ȥ��������d
//
//	d = 2021;     //ʵ�ʱ������������2021����һ����ʱ�����������ʱ�����d���и�ֵ����
//	return 0;
//}
//
//��static���εĳ�Ա��������֮Ϊ��̬��Ա����
//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//���캯��
//	Date(int year, int month, int day)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//class A
//{
//public:
//	//��Ĭ�Ϲ��캯��
//	A(int a)
//		:_a(a)
//	{}
//
//��static���εĳ�Ա��������֮Ϊ��̬��Ա����
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B(int a, int ref)
//		:_aobj(a)
//		, _ref(ref)
//		, _n(10)
//	{}
//
//private:
//	A _aobj; // û��Ĭ�Ϲ��캯�������ǲ��ô��ξ��ܵ��õĹ��캯����
//	int& _ref; // ����
//	const int _n; // constclass A

//class A
//{
//public:
//	A(int val)
//		:b(val)
//
//		,a(b)
//	{}
//
//private:
//	int a;
//
//	int b;
//}
//
//int main()
//{
//	Date d1;
//	return 0;
//}

