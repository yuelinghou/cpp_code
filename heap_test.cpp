#define _CRT_SECURE_NO_WARNINGS 1

#include"heap.h"

// ������������ֵ
static void swap(int* num1, int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

// ���µ����㷨(�ú��Ӻ͸�ĸ��)
void AdjustDown(int* a, int n, int parent)
{
	// �������ȼ�������
	int child = parent * 2 + 1;
	while (child < n)// ��Ȼ���ú��Ӻ͸�ĸ�ȣ��Ǿ͵��к���
	{
		// ������Һ��ӵĻ��Ƚ��Һ��Ӻ����ӵĴ�С
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;
		}
		// �ȽϺ��Ӻ͸�ĸ�Ĵ�С
		if (a[child] > a[parent])
		{
			swap(&a[child], &a[parent]);
			// ���µ���һ�鸸ĸ�ͺ���
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// ���ϵ����㷨���ú��Ӻ͸�ĸ�ȣ�
void AdjustUp(int* a, int child)
{
	// ���������ӵ����ڵ��ˣ�û�и�ĸ��֮�Ƚ�
	while (child > 0)
	{
		int parent = (child - 1) / 2;
		if (a[parent] < a[child])
		{
			swap(&a[parent], &a[child]);
			child = parent;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)
{
	// 1.����
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	// 2.����
	int end = n - 1;
	while (end > 0)
	{
		// �Ѹ��ڵ��Ƶ����һ��λ�ã�����������Ȼ�Ƕѣ�
		swap(&a[0], &a[end]);
		// ���һ��λ�ò��ƣ������µ����㷨�������ڵ�����
		AdjustDown(a, end, 0);
		--end;
	}
}


