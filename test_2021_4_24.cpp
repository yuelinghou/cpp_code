#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include <string>
using namespace std;

//void test1()
//{
//	//用C格式字符串构造string类对象s
//	string s1("hello world");
//	cout << s1 << endl;
//}
//
//void test2()
//{
//	string s(6, 'a');
//	cout << s << endl;
//}

//void test3()
//{
//	string s("abcdef");
//	/*cout << s << endl;
//	s.resize(100);
//	cout << s << endl;
//	cout << s.capacity() << endl;*/
//	/*s.clear();*/
//	/*s.reserve(8);
//	cout << s << endl;
//	cout << s.capacity() << endl;*/
//	s.
//}

//void test4()
//{
//	string s("abcdef");
//	cout << s.capacity() << endl;
//	s.reserve(3);
//	cout << s.capacity() << endl;
//}

//void test()
//{
//	//扩容前
//	string s("hello");
//	cout << s.capacity() << endl;
//	cout << s.size() << endl;
//
//	cout << endl;
//
//	//扩容后
//	s.reserve(30);//想要把容量改为3
//	cout << s.capacity() << endl;
//	cout << s.size() << endl;
//}

//void test()
//{
//	string s("hello");
//	//缩小有效字符个数
//	s.resize(3);
//	cout << s << endl;
//
//	cout << endl;
//
//	//扩大有效字符个数，并且多出的有效空间用字符a填充
//	s.resize(30, 'a');
//	cout << s << endl;
//}

//void test()
//{
//	string s("hello");
//	s.clear();
//	cout << s << endl;
//}

//void test()
//{
//	string s("hi,2021");
//	
//	cout << s.substr(3, 4) << endl;
//
//	//如果截取的字符超过了有效字符的个数，也只会截取完有效字符
//	cout << s.substr(3, 100) << endl;
//}
//
//int main()
//{
//	test();
//	/*test1();*/
//	/*char arr1[10] = { 0 };
//	char arr2[10] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	return 0;*/
//	return 0;
//}
