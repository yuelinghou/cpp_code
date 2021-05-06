#pragma once

#include<iostream>
#include<assert.h>
using namespace std;

namespace my_vector
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

		// Member functions
		vector()
			:_first(nullptr)
			,_finish(nullptr)
			,_endofstorage(nullptr)
		{}

		vector(size_t n, const T& val = T())
			:_first(nullptr)
			,_finish(nullptr)
			,_endofstorage(nullptr)
		{
			reserve(n);
			while (n--)
			{
				*_finish = val;
				++_finish;
			}
		}

		vector(const vector& v)
			:_first(nullptr)
			,_finish(nullptr)
			,_endofstorage(nullptr)
		{
			reserve(v.capacity());
			const_iterator it = v.cbegin();
			const_iterator finish = v.cend();
			while (it != finish)
			{
				*_finish++ = *it++;
			}
		}

		~vector()
		{
			delete[] _first;
			_first = _finish = _endofstorage = nullptr;
		}

		vector<T>& operator=(vector<T> v)
		{
			swap(v);
			return *this;
		}

		// Capacity:
		bool empty()const
		{
			return _first == _finish;
		}

		size_t size()const
		{
			return _finish - _first;
		}

		size_t capacity()const
		{
			return _endofstorage - _first;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t len = size();
				T* tmp = new T[n];
				for (size_t i = 0; i < len; ++i)
				{
					tmp[i] = _first[i];
				}
				delete[] _first;
				_first = tmp;
				_finish = tmp + len;
				_endofstorage = tmp + n;
			}
		}

		void resize(size_t n, const T& val = T())
		{
			// 1.当n大于其有效数据长度的处理
			if (n > size())
			{
				if (n > capacity())
				{
					reserve(n);
				}
				iterator finish = _first + n*sizeof(T);
				while (_finish != finish)
				{
					*_finish = val;
					++_finish;
				}
			}
			else// 2.当n小于等于其有效数据长度的处理
			{
				_finish = _first + n * sizeof(T);
			}
		}

		// Iterators
		iterator begin()
		{
			return _first;
		}
		const_iterator cbegin()const
		{
			return _first;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator cend()const
		{
			return _finish;
		}

		// Modifiers
		void swap(vector<T>& v)
		{
			//下面的::swap都是std的swap
			::swap(_first, v._first);
			::swap(_finish, v._finish);
			::swap(_endofstorage, v._endofstorage);
		}

		void push_back(const T& val)
		{
			if (_finish == _endofstorage)
			{
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
				reserve(newcapacity);
			}
			*_finish++ = val;;
		}

		void pop_back()
		{
			if (_finish!=_first)
			{
				--_finish;
			}
		}

		iterator insert(iterator pos, const T& val)
		{
			if (_finish == _endofstorage)
			{
				size_t len = pos-_first;
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
				reserve(newcapacity);
				pos = _first + len;
			}
			iterator end = _finish-1;
			while (pos <= end)
			{
				*(end + 1) = *end;
				--end;
			}
			*pos = val;
			++_finish;
			return pos;
		}

		iterator erase(iterator pos)
		{
			iterator begin = pos;
			while (begin < _finish)
			{
				*begin = *(begin + 1);
				++begin;
			}
			--_finish;
			return pos;
		}

		/*iterator erase(iterator pos)
		{
			iterator begin = pos + 1;
			while (begin != _finish)
			{
				*(begin - 1) = *begin;
				++begin;
			}
			--_finish;
			return pos;
		}*/

		void clear()
		{
			_finish = _first;
		}

	private:
		iterator _first;
		iterator _finish;
		iterator _endofstorage;
	};

	void test()
	{
		vector<int> v(6, 2);
		/*vector<int>::iterator pos = v.begin();
		v.erase(v.begin());
		cout << *pos << endl;*/

		auto it = v.begin();
		while (it != v.end())
		{
			if (*it % 2 == 0)
				v.erase(it);
			//else
			    ++it;
		}

		/*vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.reserve(3);*/
		//v.erase(v.end());
		//vector<int> v1(3,3);
		//vector<int> v2;
		//v2 = v1;
		//cout << int() << endl;       // int默认的的构造函数
		//cout << int(1) << endl;      // int构造函数
		//
		//cout << double() << endl;    // double默认的构造函数
		//cout << double(1.1) << endl; // double构造函数

		//vector<float> v_int;
		///*vector<char> v_double;
		//v_int.resize(3);
		//v_double.resize(3);
		//for (auto& e : v_int)
		//{
		//	cout << e << endl;
		//}*/
		//for (auto& e : v_int)
		//{
		//	cout << e << endl;
		//}
		//vector<int> v1;
		//v1.push_back(1);
		//v1.push_back(2);
		//v1.push_back(3);
		///*vector<int> v2;
		//v2.push_back(1);
		//for (auto& e : v2)
		//{
		//	cout << e << " ";
		//}*/
		//cout << v1.size() << endl;
	}
}


