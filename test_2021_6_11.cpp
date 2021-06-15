#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;

//// 基类Person
//class Person
//{
//public:
//	void Print()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//	}
//
//protected:
//	string _name="nick";// 姓名
//	size_t _age=18; // 年龄
//};
//
//// 子类Student
//class Student : public Person
//{
//private:
//	size_t _stuid;// 学号
//};
//
//// 子类Teacher
//class Teacher : public Person
//{
//private:
//	size_t _jobid;// 工号
//};
//

//// 基类Person
//class Person
//{
//public:
//	Person(const char* name="nick")
//		:_name(name)
//	{
//		cout <<"Person" << endl;
//	}
//private:
//	string _name;
//};
//
//// 派生类Student
//class Student : public Person
//{
//public:
//	Student(const char* name, int num)
//		//:Person(name)
//		: _num(num)
//	{
//		cout << "Student()" << endl;
//	}
//private:
//	int _num;
//};

//// 基类Person
//class Person
//{
//public:
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//private:
//	string _name;
//};
//
//// 派生类Student
//class Student : public Person
//{
//public:
//	~Student()
//	{
//		// 这里显示调用一下基类的析构函数
//		Person::~Person();
//		cout << "~Student()" << endl;
//	}
//private:
//	int _num;
//};

// 基类Person
//class Person
//{
//public:
//	Person(const char* name)
//		:_name(name)
//	{}
//
//	Person& operator= (const Person& p)
//	{
//		_name = p._name;
//		return *this;
//	}
//private:
//	string _name;
//};
//
//// 派生类Student
//class Student : public Person
//{
//public:
//	Student(const char* name, int num)
//		:Person(name)
//		, _num(num)
//	{}
//
//	Student& operator=(const Student& s)
//	{
//		_num = s._num;
//		return *this;
//	}
//private:
//	int _num;
//};
//
//int main()
//{
//	Student s1("nick", 20204912);
//	Student s2("jacker", 20201111);
//	s2 = s1;
//	return 0;
//}

//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name; // 姓名
//};
//class Student : public Person
//{
//protected:
//	int _num; // 学号
//};
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._num << endl;
//}
//int main()
//{
//	Person p;
//	Student s;
//	// 编译不通过，不能访问Student::_num
//	Display(p, s);
//}

//class Person
//{
//public:
//	Person()
//	{
//		++count;
//	}
//public:
//	static int count; //统计人数
//};
//
//int Person::count = 0;
//
//class Student:public Person
//{
//protected:
//	int _sum; //学号
//};
//
//int main()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	cout << "人数：" << s1.count << endl;
//	Person::count = 0;
//	cout << "人数：" << s3.count << endl;
//	return 0;
//}

//class A
//{
//public:
//	int _a;
//};
//// class B : public A
//class B : virtual public A
//{
//public:
//	int _b;
//};
//// class C : public A
//class C : virtual public A
//{
//public:
//	int _c;
//};
//class D : public B, public C
//{
//public:
//	int _d;
//};
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//	return 0;
//}

//class Person
//{
//public:
//	string _name;
//};
//
//class Student:virtual public Person
//{
//public:
//	int _num; //学号
//};
//
//class Teacher:virtual public Person
//{
//public:
//	int _id; //职工编号
//};
//
//class Assistant :public Student, public Teacher
//{
//public:
//	string _major; //主修科目 
//};
//
//int main()
//{
//	// 可以直接访问_name了
//	// 这时Assistant类只有一个_name成员
//	Assistant a;
//	a._name = "jacker";
//
//	// 下面的这种方式依然可以
//	// 不过操作的都是a对象的唯一的那个_name成员
//	a.Student::_name = "jacker";
//	a.Teacher::_name = "nick";
//	return 0;
//}

class A
{
public:
	int _a;
};

class B : virtual public A
{
public:
	int _b;
};

class C : virtual public A
{
public:
	int _c;
};

class D : public B,public C
{
public:
	int _d;
};

int main()
{
	D d;
	d.B::_a = 1;
	d.C::_a = 2;
	d._b = 3;
	d._c = 4;
	d._d = 5;
	return 0;
}