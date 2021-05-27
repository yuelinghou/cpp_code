#pragma once

#include<iostream>
#include<vector>
using namespace std;

namespace MyPriorityQueue
{
	// 仿函数less
	template<class T>
	struct less
	{
		bool operator()(const T& x1, const T& x2)
		{
			return x1 < x2;
		}
	};

	// 仿函数greater
	template<class T>
	struct greater
	{
		bool operator()(const T& x1, const T& x2)
		{
			return x1 > x2;
		}
	};

	// priority_queue
	template<class T, class Container = vector<T>, class Compare = less<T>>
	class priority_queue
	{
	public:
		// 无参的默认构造函数
		priority_queue()
			:_con()
		{}

		// 传迭代对应容器类型对象的迭代器来构造
		template<class Iterator>
		priority_queue(Iterator first, Iterator last)
			: _con(first, last)
		{
			// 向下调整法建堆
			int n = _con.size();
			for (int i = (n - 1 - 1) / 2; i >= 0; --i)
			{
				AdjustDown(i);
			}
		}

		// 入队列
		void push(const T& data)
		{
			_con.push_back(data);
			AdjustUp(_con.size()-1);
		}

		// 出队列
		void pop()
		{
			swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();
			AdjustDown(0);
		}

		// 长度
		int size()const
		{
			return _con.size();
		}

		// 判空
		bool empty()const
		{
			return _con.empty();
		}

		// 获取栈顶（堆顶）元素
		const T& top()const
		{
			return _con.front();
		}

	private:
		// 向下调整算法
		void AdjustDown(int parent)
		{
			int n = _con.size();
			int child = parent * 2 + 1;
			while(child < n)
			{
				if (child + 1 < n&&Compare()(_con[child], _con[child + 1]))
				{
					++child;
				}
				if (Compare()(_con[parent], _con[child]))
				{
					swap(_con[parent], _con[child]);
					parent = child;
					child = parent * 2 + 1;
				}
				else
				{
					return;
				}
			}
		}

		// 向上调整算法
		void AdjustUp(int child)
		{
			int n = _con.size();
			while (child > 0)
			{
				int parent = (child - 1) / 2;
				if (Compare()(_con[parent], _con[child]))
				{
					swap(_con[parent], _con[child]);
					child = parent;
				}
				else
				{
					return;
				}
			}
		}

	private:
		Container _con;
	};

	void test()
	{
		vector<int> v = { 2,1,3,3,2,0,6 };
		priority_queue<int> p(v.begin(), v.end());
	}
}



