#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//using namespace std;
////ʵ���������Ľ���
//template<class T>
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//
////ʵ�������������
//template<class T>
//T Add(T left, T right)
//{
//	return left + right;
//}
//
//// ר�Ŵ���int�ļӷ�����
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//// ͨ�üӷ�����ģ��
//template<class T>
//T Add(T left, T right)
//{
//	return left + right;
//}
//
//int main()
//{
//	int a1 = 10;
//	int a2 = 20;
//
//	Add(a1, a2);
//
//	Add<int>(a1, a2);
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//template<class T>

//class A
//{
//public:
//	//���캯��
//	A(T date)
//	{
//		_date = date;
//	}
//
//	//���������������������Ƕ��壩
//	~A();
//
//private:
//	T _date;
//	static T _a;
//};
//
//template<class T>
//T A<T>::_a = 10;
//
//template<class T>
//A<T>::~A()
//{
//	_date = 0;
//}
//
//int main()
//{
//	A<int> d1(10);
//
//	A<double> d2(1.1);
//
//	return 0;
//}
//
//template<class T>
//class Date
//{
//	//���캯����Ϊ����ʾ��������ģ�����涨�壩
//	Date(int year = 2021);
//
//private:
//	int _year;
//	//��̬�ĳ�Ա��������������ģ�������涨��
//	static T _a;
//};
//
//template<class T>
//T Date<T>::_a = 10;
//
//template<class T>
//Date<T>::Date(int year)
//{
//	_year = year;
//}
