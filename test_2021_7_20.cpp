#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <assert.h>
using namespace std;

namespace ljj
{
	class string
	{
	public:
		string(const char* str = "")
			:_str(new char[strlen(str) + 1])
		{
			assert(str);
			strcpy(_str, str);
		}

		string(const string &s)
			:_str(nullptr)
		{
			string tmp(s._str);
			swap(_str, tmp._str);
		}

		string& operator=(string s)
		{
			swap(_str, s._str);
			return *this;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
		}

		char* c_str()
		{
			return _str;
		}

	private:
		char *_str;
	};

	void test()
	{
		string s1("hello world");
		string s2 = s1;
		string s3;
		s3 = s1;
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
		cout << s3.c_str() << endl;
	}
}

namespace ljj

{
	class string
	{
	public:
		friend ostream& operator<<(ostream& _cout, const ljj::string& s);
		friend istream& operator>>(istream& _cin, ljj::string& s);
		static const size_t npos = -1;
		typedef char* iterator;
	public:
		// 四个默认成员函数
		string(const char* str = "")
		{
			assert(str);
			size_t len = strlen(str);
			_size = len;
			_capacity = len;
			_str = new char[len+1];
			strcpy(_str, str);
		}

		string(const string& s)
			:_str(nullptr)
			, _size(0)
			,_capacity(0)

		{
			string tmp(s._str);
			swap(tmp);
		}

		string& operator=(string s)
		{
			swap(s);
			return *this;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = 0;
			_capacity = 0;
		}

		// iterator
		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		// modify
		void push_back(char c)
		{
			if (_size == _capacity)
			{
				size_t newCapacity = _capacity == 0 ? 15 : 2 * _capacity;
				reserve(newCapacity);
			}
			_str[_size++] = c;
			_str[_size] = '\0';
		}

		void append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			strcpy(_str + _size, str);
			_size += len;
		}

		string& operator+=(const char* str)
		{
			assert(str);
			append(str);
			return *this;
		}

		string& operator+=(char c)
		{
			push_back(c);
			return *this;
		}

		void clear()
		{
			resize(0);
		}

		void swap(string& s)
		{
			::swap(_str, s._str);
			::swap(_size, s._size);
			::swap(_capacity, s._capacity);
		}

		const char* c_str()const
		{
			return _str;
		}



		/////////////////////////////////////////////////////////////

		// capacity

		size_t size()const
		{
			return _size;
		}

		size_t capacity()const
		{
			return _capacity;
		}

		bool empty()const
		{
			return _size == 0;
		}

		void resize(size_t n, char c = '\0')
		{
			if (n > _size)
			{
				reserve(n);
				memset(_str + _size, c, n - _size);
				_str[n] = '\0';
				_size = n;
			}
			else if (n < _size)
			{
				reserve(n);
				_size = n;
			}
		}

		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n+1];
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				_capacity = n;
			}
			if (n < _capacity)
			{
				if (n < _size)
				{
					char* tmp = new char[n + 1];
					strncpy(tmp, _str, n);
					tmp[n] = '\0';
					delete[] _str;
					_str = tmp;
					_size = n;
					_capacity = n;
				}
				else
				{
					char* tmp = new char[n + 1];
					strcpy(tmp, _str);
					_str = tmp;
					_capacity = n;
				}
			}
		}

		// access
		char& operator[](size_t index)
		{
			assert(index < _size);
			return _str[index];
		}

		const char& operator[](size_t index)const
		{
			assert(index < _size);
			return _str[index];
		}

		//relational operators

		bool operator<(const string& s)
		{
			if (strcpy(_str, s._str)<0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		// 比较运算符重载
		bool operator<=(const string& s)
		{
			return !(*this > s);
		}

		bool operator>(const string& s)
		{
			return !(*this <= s);
		}

		bool operator>=(const string& s)
		{
			return !(*this < s);
		}

		bool operator==(const string& s)
		{
			if (strcpy(_str, s._str)==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		bool operator!=(const string& s)
		{
			return !(*this == s);
		}

		// 返回c在string中第一次出现的位置
		size_t find(char c, size_t index = 0) const
		{
			assert(index < _size);
			for (size_t i = index; i < _size; ++i)
			{
				if (_str[index] == c)
				{
					return i;
				}
			}
			return npos;
		}

		// 返回子串s在string中第一次出现的位置
		size_t find(const char* s, size_t index = 0) const
		{
			char* pos = strstr(_str + index, s);
			if (pos)
			{
				string::iterator it = _str;
				for (size_t i = 0; i < _size; ++i)
				{
					if (it + i == pos)
					{
						return i;
					}
				}
			}
			return npos;
		}

		// 在pos位置上插入字符c/字符串str，并返回该字符的位置

		string& insert(size_t pos, char c)
		{
			assert(pos <= _size);
			if (_size == _capacity)
			{
				size_t newCapacity = _capacity == 0 ? 15 : 2 * _capacity;
				reserve(newCapacity);
			}
			for (size_t i = (int)_size-1; i >= (int)pos; --i)
			{
				_str[i + 1] = _str[i];
			}
			_str[pos] = c;
			++_size;
			_str[_size] = '\0';
			return *this;
		}

		string& insert(size_t pos, const char* str)
		{
			assert(pos <= _size);
			int len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}
			for (int i = (int)_size - 1; i >= (int)pos; --i)
			{
				_str[i + len] = _str[i];
			}
			strncpy(_str + pos, str,len);
			_size += len;
			_str[_size] = '\0';
			return *this;
		}


		// 删除pos位置上的元素，并返回该元素的下一个位置

		string& erase(size_t pos, size_t len)
		{
			assert(pos < _size);
			if (pos + len > _size)
			{
				reserve(pos);
			}
			else
			{
				strcpy(_str + pos, _str + pos + len);
				_size -= len;
			}
			return *this;
		}

	private:

		char* _str;

		size_t _capacity;

		size_t _size;

	};

	void test()
	{
		string s1("aaa");
		string s2(s1);
		string s3("111");
		s3 = s2;
		s1.insert(0, "yyyyyy");
		s1.erase(0, 7);
		cout << s1 << endl;
		//cout<<s1.find("llo") << endl;
		//s1.clear();
		/*string::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			++it;
		}*/
		/*for (auto& e : s1)
		{
			cout << e;
		}
		cout << endl;*/
		//cout << endl;
		//cout << s1.c_str() << endl;
		/*cout << s2.c_str() << endl;
		cout << s3.c_str() << endl;*/
		/*for (size_t i = 0; i < s1.size(); ++i)
		{
			cout << s1[i];
		}*/
		//cout << endl;
	}
	ostream& operator<<(ostream& _cout, const ljj::string& s)
	{
		_cout << s._str;
		return _cout;
	}

	istream& operator>>(istream& _cin, ljj::string& s)
	{
		_cin >> s._str;
		return _cin;
	}
}

int main()
{
	ljj::test();
	return 0;
}
