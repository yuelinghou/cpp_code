#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//#include<stdlib.h>

//����ĳ���������
//��Ϊǳ����������ͬһ��ռ�ռ���
//class Stack
//{
//public:
//	Stack(int n=10)
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		_top = 0;
//		_capacty = n;
//	}
//	//����������ɿռ��ͷ�
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
//	//���캯������ʼ����Ա����
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
//	//����һ��d1����
//	Date d1(2021, 4, 15);
//	//���ñ�����Ĭ�����ɵĿ���������ʵ����d2
//	Date d2 = d1;
//	return 0;
//}

//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//// ȫ�ֵ�operator==
//class Date
//{
//public:
//	//���캯��
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//ȫ�ֵ���������ز��ܷ���˽�еĳ�Ա���������ǰѺ�����Ϊ�����Ԫ����
//	//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////ȫ�ֵĸ�ֵ���������
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
//	// ������Ҫע����ǣ����������thisָ��ĵ��ú����Ķ��󣨱��ʽ����ֵ��
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
//	//���÷�ʽ1
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
//	//��ʾ����ĸ�ֵ����
//	Date& operator=(const Date& d)
//	{
//		if (this != &d)//�ж��Ƿ��Լ����Լ���ֵ
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
////������������ֵ��÷�ʽ
//Date d2(d1);
//Date d2 = d1;
//
////��ֵ���ص����ֵ��÷�ʽ
//d2.operator(d1);
//d2 = d1;
//
//class Date
//{
//public:
//	//���캯������ʼ����Ա����
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//�������캯��
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
////����һ������d1
//Date d1(2021, 4, 15);
//
////��d1��������d2
////д��һ��
//Date d1 = d2;
//
////д������
//Date d1(d2);