#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;

//// ����Person
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
//	string _name="nick";// ����
//	size_t _age=18; // ����
//};
//
//// ����Student
//class Student : public Person
//{
//private:
//	size_t _stuid;// ѧ��
//};
//
//// ����Teacher
//class Teacher : public Person
//{
//private:
//	size_t _jobid;// ����
//};
//

//// ����Person
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
//// ������Student
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

//// ����Person
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
//// ������Student
//class Student : public Person
//{
//public:
//	~Student()
//	{
//		// ������ʾ����һ�»������������
//		Person::~Person();
//		cout << "~Student()" << endl;
//	}
//private:
//	int _num;
//};

// ����Person
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
//// ������Student
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
//	string _name; // ����
//};
//class Student : public Person
//{
//protected:
//	int _num; // ѧ��
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
//	// ���벻ͨ�������ܷ���Student::_num
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
//	static int count; //ͳ������
//};
//
//int Person::count = 0;
//
//class Student:public Person
//{
//protected:
//	int _sum; //ѧ��
//};
//
//int main()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	cout << "������" << s1.count << endl;
//	Person::count = 0;
//	cout << "������" << s3.count << endl;
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
//	int _num; //ѧ��
//};
//
//class Teacher:virtual public Person
//{
//public:
//	int _id; //ְ�����
//};
//
//class Assistant :public Student, public Teacher
//{
//public:
//	string _major; //���޿�Ŀ 
//};
//
//int main()
//{
//	// ����ֱ�ӷ���_name��
//	// ��ʱAssistant��ֻ��һ��_name��Ա
//	Assistant a;
//	a._name = "jacker";
//
//	// ��������ַ�ʽ��Ȼ����
//	// ���������Ķ���a�����Ψһ���Ǹ�_name��Ա
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