#define _CRT_SECURE_NO_WARNINGS 1

////定义命名空间
//namespace N1
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N2
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
//
//int main()
//{
//	printf("%d\n", N::a);
//	return 0;
//}
//
//
//int a = 10;
//int& ra = a;

#include<iostream>
using namespace std;

//int main()
//{
//	/*int i = 10;
//	const double& ri = i;
//	return 0;*/
//
//
//}

//int main()
//{
//	// 1.该语句编译时会出错，a被const修饰权限为只读，而引用对象的访问权限是可读可写的，权限增大了（不允许）
//	const int a = 10;
//	int& ra = a; 
//
//	// 2.正常编译，b可读可写，b1权限为只读，权限缩小；至于b2，权限为可读可写
//	int b = 10;
//	const int& b1 = b;
//	int& b2 = b;
//	return 0;
//}

int main()
{
	int i = 10;

	// 1.编译通过
	//只是单纯的拷贝变量的值，跟访问权限没有关系
	float di = i;

	// 2.编译通过
	//不涉及到隐式类型转换所以ri1就是i的引用
	int& ri1 = i;

	// 2.编译不通过
	//涉及到隐式类型转换，相当于ri2是float类型的临时变量的引用
	//但临时变量具有常属性，访问权限变大，所以编译不通过
	float& ri2 = i;

	// 4.编译通过
	//ri2是float类型的临时变量的引用
	//ri3也是常属性，所以它可以作为临时变量的引用，访问权限都是只读
	const float& ri3 = i;
	return 0;
}