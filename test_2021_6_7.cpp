#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

// 实现两个数相加的函数模板
template<class T>
T Add(T x1, T x2)
{
	return x1 + x2;
}

//namespace MyArray
//{
//	// 定义一个模板类型的静态数组
//	template<class T, size_t N = 10>
//	class array
//	{
//	public:
//		T& operator[](size_t index) { return _array[index]; }
//		const T& operator[](size_t index)const { return _array[index]; }
//		size_t size()const { return _size; }
//		bool empty()const { return 0 == _size; }
//		void Fix(size_t n)
//		{
//			N = n;
//		}
//	private:
//		T _array[N];
//		size_t _size=N;
//	};
//}

// 基础类模板
template<class T1, class T2>
class Data
{
public:
	Data() { cout << "Data<T1, T2>" << endl; }
private:
	T1 _d1;
	T2 _d2;
};

// 将第二个参数特化为int
template <class T1>
class Data<T1, int>
{
public:
	Data() { cout << "Data<T1, int>" << endl; }
private:
	T1 _d1;
	int _d2;
};


template<class T>
bool IsEqual(T& x1, T& x2)
{
	return  x1 == x2;
}

template<>
bool IsEqual<char*>(char*& left, char*& right)
{
	if (strcmp(left, right) > 0)
	{
		return true;
	}
	return false;
}

bool IsEqual(char* left, char* right)
{
	if (strcmp(left, right) > 0)
	{
		return true;
	}
	return false;
}

void TestVector()
{
	Data<int, char> d1;
	Data<char, int> d2;
}

int main()
{
	TestVector();
	return 0;
}
