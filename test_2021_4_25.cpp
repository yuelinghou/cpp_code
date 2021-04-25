//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<iostream>
//using namespace std;

//void test()
//{
//	string s("hello");
//	// [] + 下标
//	// 读
//	for (size_t i = 0; i < s.size(); i++)
//	{
//		cout << s[i] << endl;
//	}
//
//	//写
//	for (size_t i = 0; i < s.size(); i++)
//	{
//		s[i] += 1;
//	}
//}
//
//void test()
//{
//	string s("hello");
//	// 迭代器
//	// 读 
//	string::iterator it = s.begin(); // begin获取一个字符的迭代器
//	while (it != s.end())            // end获取最后一个字符下一个位置的迭代器
//	{
//		cout << *it;
//		it++;
//	}
//	cout << endl;
//
//	// 写
//	it = s.begin();
//	while (it != s.end())
//	{
//		*it += 1;
//		it++;
//	}
//}

//void test()
//{
//	string s("hello");
//	// 范围for
//	// 读
//	for (auto e : s)
//	{
//		cout << e << endl;
//	}
//
//	//写
//	for (auto& e : s)
//	{
//		e += 1;
//	}
//}

//int main()
//{
//	test();
//	return 0;
//}