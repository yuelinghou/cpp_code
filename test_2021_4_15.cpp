#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<stdlib.h>

//下面的程序会崩溃掉
//因为浅拷贝带来的同一块空间空间多次
//class Stack
//{
//public:
//	Stack(int n=10)
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		_top = 0;
//		_capacty = n;
//	}
//	//析构函数完成空间释放
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_top = 0;
//		_capacty = 0;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacty;
//};
//
//int main()
//{
//	Stack s1;
//	Stack s2(s1);
//	return 0;
//}

//class Date
//{
//public:
//	//构造函数，初始化成员变量
//	Date(int year = 0, int month = 1,int day=1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	//构造一个d1对象
//	Date d1(2021, 4, 15);
//	//利用编译器默认生成的拷贝构造来实例化d2
//	Date d2 = d1;
//	return 0;
//}

//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//// 全局的operator==
//class Date
//{
//public:
//	//构造函数
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//全局的运算符重载不能访问私有的成员函数，除非把函数设为类的友元函数
//	//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////全局的赋值重载运算符
//void operator=(const Date& d1, const Date& d2)
//{
//	d1._year == d2._year;
//	d1._month == d2._month;
//    d1._day == d2._day;
//}
//int main()
//{
//	Date d1(2018, 9, 26);
//	Date d2(2018, 9, 27);
//	cout << (d1 == d2) << endl;
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// bool operator==(Date* this, const Date& d2)
//	// 这里需要注意的是，左操作数是this指向的调用函数的对象（表达式的左值）
//	bool operator==(const Date& d2)
//	{
//		return _year == d2._year
//		    && _month == d2._month
//			&& _day == d2._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2018, 9, 26);
//	Date d2(2018, 9, 27);
//	//调用方式1
//	cout << (d1.operator==(d2)) << endl;
//
//	cout << (d1 == d2) << endl;
//	return 0;
//}

//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//
//class Date
//{
//public:
//	//显示定义的赋值重载
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)//判断是否自己给自己赋值
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
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
//	Date d2;
//	d1 = d2;
//	d1.operator=(d2);
//	return 0;
//}
//
////拷贝构造的两种调用方式
//Date d2(d1);
//Date d2 = d1;
//
////赋值重载的两种调用方式
//d2.operator(d1);
//d2 = d1;
//
//class Date
//{
//public:
//	//构造函数，初始化成员变量
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//拷贝构造函数
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////构造一个对象d1
//Date d1(2021, 4, 15);
//
////用d1拷贝构造d2
////写法一：
//Date d1 = d2;
//
////写法二：
//Date d1(d2);