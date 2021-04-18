#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stdlib.h>
using namespace std;

//class Date
//{
//public:
//	Date(int year=20,int month=30)
//		:_year(year)
//	{
//		cout << "Date(int year=20)" << endl;
//	}
//
//	~Date()
//	{
//		cout << "~Date()" << endl;
//	}
//
//	static void Print()
//	{
//		cout << "haha" << endl;
//	}
//private:
//	int _year;
//	int _month;
//};
//
//int main()
//{
//	//Date* p = new Date;
//	////Date* p = (Date*)malloc(sizeof(Date));
//	//new(p) Date(100);
//	//p->Print();
//	Date* p = new Date[10];
//	/*Date().Print();
//	Date d;*/
//	return 0;
//}

int global_Var = 10;

static int static_Global_Var = 20;

int main()
{
	/*int local_Var = 10;

	static int static_local_Var = 20;
	return 0;*/

	// 1.malloc
	int* p1 = (int*)malloc(sizeof(int) * 10);//申请40个字节的空间

	// 2.calloc
	int* p2 = (int*)calloc(4, sizeof(int));//申请40个字节的空间

	// 3.realloc
	int* p3 = (int*)realloc(p2,20 * sizeof(int));//扩展p2的空间为80个字节

	// 4.free
	//释放动态开辟的空间
	free(p1);
	free(p3);
}

