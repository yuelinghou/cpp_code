#define _CRT_SECURE_NO_WARNINGS 1

////���������ռ�
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
//	// 1.��������ʱ�����a��const����Ȩ��Ϊֻ���������ö���ķ���Ȩ���ǿɶ���д�ģ�Ȩ�������ˣ�������
//	const int a = 10;
//	int& ra = a; 
//
//	// 2.�������룬b�ɶ���д��b1Ȩ��Ϊֻ����Ȩ����С������b2��Ȩ��Ϊ�ɶ���д
//	int b = 10;
//	const int& b1 = b;
//	int& b2 = b;
//	return 0;
//}

int main()
{
	int i = 10;

	// 1.����ͨ��
	//ֻ�ǵ����Ŀ���������ֵ��������Ȩ��û�й�ϵ
	float di = i;

	// 2.����ͨ��
	//���漰����ʽ����ת������ri1����i������
	int& ri1 = i;

	// 2.���벻ͨ��
	//�漰����ʽ����ת�����൱��ri2��float���͵���ʱ����������
	//����ʱ�������г����ԣ�����Ȩ�ޱ�����Ա��벻ͨ��
	float& ri2 = i;

	// 4.����ͨ��
	//ri2��float���͵���ʱ����������
	//ri3Ҳ�ǳ����ԣ�������������Ϊ��ʱ���������ã�����Ȩ�޶���ֻ��
	const float& ri3 = i;
	return 0;
}