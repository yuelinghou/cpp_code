#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//int main()
//{
//	// 1.malloc����4���ֽڵĿռ�
//	int* p1 = (int*)malloc(sizeof(int));
//
//	// 2.operator new����4���ֽڵĿռ�
//	int*p2 = (int*)operator new(sizeof(int));
//
//	// 1. operator delete�ͷſռ�
//	operator delete(p1);
//
//	// 2.free�ͷſռ�
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
//	//��̬����һ��ռ�
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p2 = new int;
//	//�����ˣ�����ʹ��free��delete�ͷ�ʱ��������ڴ�й©
//
//
//	return 0;
//}

