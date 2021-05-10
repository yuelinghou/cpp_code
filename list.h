#pragma once

#include<iostream>
using namespace std;

namespace my_list
{
	template<class T>
	struct ListNode
	{
		ListNode(const T x = T())
			:_val(x)
			, _prev(nullptr)
			, _next(nullptr)
		{}

		T _val;            
		ListNode<T>* _prev; 
		ListNode<T>* _next; 

	template<class T,class Ref,class Ptr>
	struct ListIterator
	{
		typedef ListNode<T> ListNode;
		typedef ListIterator<T, Ref, Ptr> self;

		ListIterator(ListNode* pnode)
			:_node(pnode)
		{}

		ListIterator(const self& it)
			:_node(it._node)
		{}

		Ref operator*()
		{
			return _node->_val;
		}

		Ptr operator->()
		{
			return &(operator*());
		}

		self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		self operator++(int)
		{
			self tmp(_node);
			_node = _node->_next;
			return tmp;
		}

		self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		self operator--(int)
		{
			self tmp(_node);
			_node = _node->_prev;
			return tmp;
		}

		bool operator==(const self it)
		{
			return _node == it._node;
		}

		bool operator!=(const self it)
		{
			return _node != it._node;
		}

		ListNode* _node;
	};

	template<class T>
	class list
	{
	public:
		typedef ListNode<T> ListNode;
		typedef ListIterator<T, T&, T*> iterator;
		typedef ListIterator<T, const T&, const T*> const_iterator;

		// Member functions
		list()
		{
			CreatHeadNode();
		}

		template <class InputIterator>
		list(InputIterator first, InputIterator last)
		{
			CreatHeadNode();
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		list(const list& lt)
		{
			CreatHeadNode();
			list<T> tmp(lt.begin(),lt.end());
			::swap(_head, tmp._head);
		}

		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		list<T>& operator=(list<T> lt)
		{
			::swap(_head, lt._head);
			return *this;
		}

		// Iterators
		iterator begin()
		{
			return iterator(_head->_next);
		}

		const_iterator begin() const
		{
			return const_iterator(_head->_next);
		}

		iterator end()
		{
			return iterator(_head);
		}

		const_iterator end() const
		{
			return const_iterator(_head);
		}

		iterator rbegin()
		{
			return iterator(_head->_prev);
		}

		const_iterator rbegin() const
		{
			return const_iterator(_head->prev);
		}

		iterator rend()
		{
			return iterator(_head);
		}

		const_iterator rend() const
		{
			return const_iterator(_head);
		}

		// Capacity
		bool empty() const
		{
			return _head == _head->_prev;
		}

		size_t size() const
		{
			size_t count = 0;
			const_iterator it = begin();
			while (it != end())
			{
				++count;
				++it;
			}
			return count;
		}

		// Modifiers
		iterator insert(iterator pos, const T& x)
		{
			ListNode* pnewnode = new ListNode(x);
			ListNode* cur = pos._node;
			ListNode* prev = cur->_prev;
			prev->_next = pnewnode;
			pnewnode->_prev = prev;
			pnewnode->_next = cur;
			cur->_prev = pnewnode;
			return iterator(pnewnode);
		}

		void push_back(const T& x)
		{
			// 写法一
			insert(end(), x);

			// 写法二
			/*ListNode* pnewnode = new ListNode(x);
			ListNode* tail = _head->_prev;
			tail->_next = pnewnode;
			pnewnode->_prev = tail;
			_head->_prev = pnewnode;
			pnewnode->_next = _head;*/
		}

		iterator erase(iterator pos)
		{
			ListNode* cur = pos._node;
			ListNode* prev = cur->_prev;
			ListNode* next = cur->_next;
			delete cur;
			prev->_next = next;
			next->_prev = prev;
			return iterator(next);
		}

		void pop_back()
		{
			erase(--end());
		}

		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				delete (it++)._node;
			}
			_head->_prev = _head;
			_head->_next = _head;
		}

	private:
		void CreatHeadNode()
		{
			_head = new ListNode;
			_head->_prev = _head;
			_head->_next = _head;
		}

		ListNode* _head;
	};

	void test()
	{
		list<int> lt1;
		lt1.push_back(1);
		lt1.push_back(2);
		lt1.push_back(3);
		list<int> lt2;
		cout << lt1.size() << endl;
		/*list<int> lt2(lt1.begin(),lt1.end());
		list<int> lt3(lt2);
		lt1.clear();
		list<int>::iterator it = lt1.begin();*/
		/*while (it != lt1.end())
		{
			cout << *it << " ";
			++it;
		}*/
		for (auto& e : lt2)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}
