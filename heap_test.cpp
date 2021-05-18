#define _CRT_SECURE_NO_WARNINGS 1

#include"heap.h"

// 交换两个数的值
static void swap(int* num1, int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

// 向下调整算法(拿孩子和父母比)
void AdjustDown(int* a, int n, int parent)
{
	// 最外面先计算左孩子
	int child = parent * 2 + 1;
	while (child < n)// 既然是拿孩子和父母比，那就得有孩子
	{
		// 如果有右孩子的话比较右孩子和左孩子的大小
		if (child + 1 < n && a[child + 1] > a[child])
		{
			++child;
		}
		// 比较孩子和父母的大小
		if (a[child] > a[parent])
		{
			swap(&a[child], &a[parent]);
			// 更新到下一组父母和孩子
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

// 向上调整算法（拿孩子和父母比）
void AdjustUp(int* a, int child)
{
	// 最坏的情况孩子到根节点了，没有父母与之比较
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
	// 1.建堆
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	// 2.排序
	int end = n - 1;
	while (end > 0)
	{
		// 把根节点移到最后一个位置（它的子树依然是堆）
		swap(&a[0], &a[end]);
		// 最后一个位置不计，用向下调整算法调整根节点数据
		AdjustDown(a, end, 0);
		--end;
	}
}


