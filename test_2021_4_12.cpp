#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

////只是形参名顺序不同的话不能构成重载
////因为函数名经过编译器修饰后还是一样的
//void func(int i,int j) //_Z4funcii
//{}
//
//void func(int j,int i) //_Z4funcii
//{}

//struct ListNode
//{
//	//C语言中不能写成 ListNode* next，前面必须加上struct
//	//C++中可以
//	//在外面定义的对象也同样适用
//	struct ListNode* next;
//};

//class Stack
//{
//	//公有的向外部开放的接口
//public:
//	void Push(Stack* s);
//	void Pop(Stack* s);
//
//	//成员变量一般设为私有的，外部不能直接访问
//private:
//	int* _a;
//	int _size;
//	int _capacity;
//};

//class Person
//{
//public:
//	int _age;
//
//private:
//	char _name[20];
//};
//
//int main()
//{
//	Person s1;
//
//	//正常，_age为public，所以外部可以直接访问
//	s1._age = 10;
//
//	//错误，_name为private，所以外部不能直接访问
//	//只能调用接口（成员函数）来操作private成员
//	s1._name = "Lisi";
//	return 0;
//}

//class Date
//{
//public:
//	void Print()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
//
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	return 0;
//}

//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	// 1.下面程序能编译通过吗？
//    // 2.下面程序会崩溃吗？在哪里崩溃
//	A* p = NULL;
//	p->PrintA();//程序崩溃，this->_a，涉及到了空指针的访问
//	p->Show();//成员函数存在公共代码段，所以p->Show()这比不会到p指向的空间上找
//}


