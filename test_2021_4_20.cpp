#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//int main()
//{
//	// 1.malloc开辟4个字节的空间
//	int* p1 = (int*)malloc(sizeof(int));
//
//	// 2.operator new开辟4个字节的空间
//	int*p2 = (int*)operator new(sizeof(int));
//
//	// 1. operator delete释放空间
//	operator delete(p1);
//
//	// 2.free释放空间
//	free(p2)
//
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 2021)
//		:_year(year)
//	{}
//
//private:
//	int _year;
//};
//
//int main()
//{
//	int* p = (int*)malloc(sizeof(int));
//	new(p) Date(2019);
//
//	//动态开辟一块空间
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p2 = new int;
//	//不用了，忘记使用free和delete释放时，就造成内存泄漏
//
//
//	return 0;
//}

