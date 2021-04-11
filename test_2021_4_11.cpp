#define _CRT_SECURE_NO_WARNINGS 1

//inline int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	cout << Add(x, y) << endl;
//	return 0;
//}

#include<iostream>
using namespace std;

//// 1.错误使用
////因为arr已经不是数组了，退化成了指针，for的范围不确定
//void TestFor(int arr[])
//{
//	for (auto& e : arr)
//		cout << e << endl;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//
//	// 2.正确使用，此时arr代表整个数组，是有确定的范围的
//	for (auto& e : arr)
//	{
//		e *= 2;
//		cout << e << " ";
//	}
//	return 0;
//}
