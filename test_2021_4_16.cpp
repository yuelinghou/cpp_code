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
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
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
//	////创建一个日期类的const对象
//	//const Date d1;
//	////const对象调用非const成员函数
//	//d1.Print();
//	////编译器转化为：d1.Print(const Date* &d1)
//
//	return 0;
//}
//
//class Date
//{
//public:
//	void Print() const //编译器处理后：void Print(const Date* this)
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

//正确地定义方法
int A::_a = 10;

int main()
{
	//错误，不能再main函数内部定义
	int A::_a = 10;
	return 0;
}
//
//int main()
//{
//	//允许这样使用
//	//explicit Date d = 2019;//实际编译器背后会用2019构造一个无名对象，再用这个临时对象去拷贝构造d
//
//	d = 2021;     //实际编译器背后会用2021构造一个临时对象，最后用临时对象给d进行赋值重载
//	return 0;
//}
//
//用static修饰的成员变量，称之为静态成员变量
//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	//构造函数
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
//	//非默认构造函数
//	A(int a)
//		:_a(a)
//	{}
//
//用static修饰的成员函数，称之为静态成员函数
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
//	A _aobj; // 没有默认构造函数（就是不用传参就能调用的构造函数）
//	int& _ref; // 引用
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

