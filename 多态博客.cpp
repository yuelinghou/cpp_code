#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

// 函数重载
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
//		// 清理Person类对象的数据
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual ~Student()
//	{
//		// 这里面只用写清理Student数据数据的逻辑
//		// 至于继承下来的Person类的数据该函数结束后编译器会自动调用Person的析构函数来完成清理
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
//		cout << "普通人 - 全价" << endl;
//	}
//};
//
//class Student : public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "学生 - 半价" << endl;
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
