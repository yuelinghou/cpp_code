#define _CRT_SECURE_NO_WARNINGS 1

//#include <iostream>
//using namespace std;
////实现两个数的交换
//template<class T>
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//
////实现两个数的相加
//template<class T>
//T Add(T left, T right)
//{
//	return left + right;
//}
//
//// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//// 通用加法函数模板
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
//	//构造函数
//	A(T date)
//	{
//		_date = date;
//	}
//
//	//析构函数（我们在类我们定义）
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
//	//构造函数（为了演示我们在类模板外面定义）
//	Date(int year = 2021);
//
//private:
//	int _year;
//	//静态的成员变量，必须在类模板在外面定义
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
