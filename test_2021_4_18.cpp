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
	int* p1 = (int*)malloc(sizeof(int) * 10);//����40���ֽڵĿռ�

	// 2.calloc
	int* p2 = (int*)calloc(4, sizeof(int));//����40���ֽڵĿռ�

	// 3.realloc
	int* p3 = (int*)realloc(p2,20 * sizeof(int));//��չp2�Ŀռ�Ϊ80���ֽ�

	// 4.free
	//�ͷŶ�̬���ٵĿռ�
	free(p1);
	free(p3);
}

