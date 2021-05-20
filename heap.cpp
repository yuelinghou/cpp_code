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
// ����ʵ���ǵ���ѣ���С�ѵĻ��ж�������һ�¾Ϳ�
static void AdjustDown(int* a, int n, int parent)
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
// ����ʵ���ǵ���ѣ���С�ѵĻ��ж�������һ�¾Ϳ�
static void AdjustUp(int* a, int child)
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

void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType)*n);
	for (int i = 0; i < n; ++i)
	{
		hp->_a[i] = a[i];
	}
	hp->_size = hp->_capacity = n;
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(hp->_a, n, i);
	}
}

void HeapDestory(Heap* hp)
{
	free(hp->_a);
	hp->_a = NULL;
	hp->_size = hp->_capacity = 0;
}

void HeapPush(Heap* hp, HPDataType x)
{
	if (hp->_size == hp->_capacity)
	{
		int newcapacity = hp->_capacity == 0 ? 4 : hp->_capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(hp->_a, sizeof(HPDataType)*newcapacity);
		if (!tmp)
		{
			printf("Realloc Fali!");
			exit(-1);
		}
		hp->_a = tmp;
		hp->_capacity = newcapacity;
	}
	hp->_a[hp->_size] = x;
	AdjustUp(hp->_a, hp->_size++);
}

void HeapPop(Heap* hp)
{
	swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	--hp->_size;
	AdjustDown(hp->_a, hp->_size, 0);
}

HPDataType HeapTop(Heap* hp)
{
	return hp->_a[0];
}

void HeapSort(int* a, int n)
{
	// 1.����
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	for (int i = 0; i < n; ++i)
	{
		AdjustUp(a, i);
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

int HeapSize(Heap* hp)
{
	return hp->_size;
}

int HeapEmpty(Heap* hp)
{
	return hp->_size == 0;
}


