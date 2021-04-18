#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//class Date
//{
//public:
//	//非静态的成员函数
//	void f2()
//	{}
//
//	//静态的成员函数
//	static void f1()
//	{
//		f2();
//	}
//};

//静态成员变量的定义
//int Date::_year = 2021;
//
//int main()
//{
//	Date d;
//	//类名::静态成员
//	Date::_year;
//	Date::Get_year();
//
//	//对象.静态成员
//	d._year;
//	d.Get_year();
//	return 0;
//}

//class Date
//{
//public:
//	//静态的成员函数
//	static void f2()
//	{}
//
//	//非静态的成员函数
//	void f1()
//	{
//		f2();
//	}
//};

//class Date
//{
//public:
//	//若显示定义了全缺省的默认构造函数，最后的缺省值还是一构造函数为准
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
//	//非静态成员变量，可以在成员声明时给缺省值
//	int _year = 2019;
//};
//
//int main()
//{
//	//这里调用了系统给的默认构造函数
//	//按理说对int类型的_year应该是随机值
//	//但我们在声明时给了它缺省值
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
//	//构造函数
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
////外部类
//class A
//{
//private:
//	static int k;
//	int h;
//
//public:
//	//内部类
//	class B
//	{
//	public:
//		void foo(const A& a)
//		{
//			//内部类可以直接访问外部类的成员
//			cout << k << endl;//OK
//			cout << a.h << endl;//OK
//		}
//	};
//};