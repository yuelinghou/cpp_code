#define _CRT_SECURE_NO_WARNINGS 1

// 1
//#include <iostream>
//#include<assert.h>
//using namespace std;
//
//class Time
//{
//public:
//	//ȫȱʡ��Ĭ�Ϲ��캯��
//	Time(int hour=0, int minute=0, int second=0)
//		:_hour(hour)
//		,_minute(minute)
//		,_second(second)
//	{}
//
//	// set functions
//	void setTime(int hour, int minute, int second);
//	void setHour(int hour);
//	void setMinute(int minute);
//	void setSecond(int second);
//
//	// get functions
//	int getHour();
//	int getMinute();
//	int getSecond();
//
//	// print function
//	void printUniversal();
//	void printStandard();
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//// define set functions
//void Time::setTime(int hour, int minute, int second)
//{
//	assert(((hour >= 0 && hour <= 23) && (minute >= 0 && minute <= 59) && (second >= 0 && second <= 59)));
//	_hour = hour;
//	_minute = minute;
//	_second = second;
//}
//
//void Time::setHour(int hour)
//{
//	assert(hour >= 0 && hour <= 23);
//	_hour = hour;
//}
//
//void Time::setMinute(int minute)
//{
//	assert(minute >= 0 && minute <= 59);
//	_minute = minute;
//}
//
//void Time::setSecond(int second)
//{
//	assert(second >= 0 && second <= 59);
//	_second = second;
//}
//
//// define get functions
//int Time::getHour()
//{
//	return _hour;
//}
//
//int Time::getMinute()
//{
//	return _minute;
//}
//
//int Time::getSecond()
//{
//	return _second;
//}
//
//// define print function
//void Time::printUniversal()
//{
//	cout << _hour << ":" << _minute << ":" << _second << endl;
//}
//
//void Time::printStandard()
//{
//	if (_hour < 12)
//	{
//		cout << _hour << ":" << _minute << ":" << _second << "(AM)" << endl;
//	}
//	else
//	{
//		cout << _hour - 12 << ":" << _minute << ":" << _second << "(PM)" << endl;
//	}
//}
//
//void test()
//{
//	Time *pt = new Time(12, 59, 59);
//	pt->printUniversal();
//	pt->printStandard();
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}







// 2
//#include <iostream>
//#include<math.h>
//using namespace std;
//
//class Location					//������Location
//{
//	friend double distance2(Location& L1, Location& L2);//��Ԫ���������������֮��ľ���
//
//public:
//	Location(double x=0.0, double y=0.0)//���캯��	
//		:_x(x)
//		,_y(y)
//	{}
//
//	double Getx();				//��Ա������ȡx�����ֵ
//	double Gety();				//��Ա������ȡy�����ֵ
//	double distance1(Location& L);//��Ա���������������֮��ľ���
//
//private:
//	double _x;
//	double _y;
//};
//
//double Location::Getx()				//��Ա������ȡx�����ֵ
//{
//	return _x;
//}
//
//double Location::Gety()				//��Ա������ȡy�����ֵ
//{
//	return _y;
//}
//
//double Location::distance1(Location& L)//��Ա���������������֮��ľ���
//{
//	return sqrt(pow(_x - L._x, 2) + pow(_y - L._y,2));
//}
//
//double distance2(Location& L1, Location& L2)
//{
//	return sqrt(pow(L1._x - L2._x, 2) + pow(L1._y - L2._y, 2));
//}
//
//int main()
//{
//	Location A(1.0, 2.0);
//	Location B(3.0, 4.0);
//	cout << "Distance1: " << A.distance1(B) << endl;
//	cout << "Distance2: " << distance2(A,B) << endl;
//	return 0;
//}







//3
//#include <iostream>
//using namespace std;
//
//class Employee		//����Employee��
//{
//public:
//	Employee(long id = 0, char* name = nullptr, char* address = nullptr, double salary = 0.0)// ���캯��
//		:_id(id)
//		, _name(name)
//		, _address(address)
//		, _salary(salary)
//	{}
//
//	~Employee()	// ��������
//	{
//		_id = 0;
//		_name = nullptr;
//		_address = nullptr;
//		_salary = 0.0;
//	}
//
//	// set functions
//	void set_id(long);			// ����id
//	void set_salary(double);	// ����salary
//	void set_name(char *);		// ����name
//	void set_address(char*);	// ����adress
//
//	// get functions
//	long get_id();				// ����id
//	double get_salary();		// ���� salary
//	char* get_name();			// ���� name
//	char* get_addressSecond();	// ���� address
//
//	//Print
//	void Print();	// ��ӡ���Employee�������Ϣ  
//
//private:
//	long _id;		// ����
//	char* _name;    // ����
//	char* _address;	// ��ͥסַ
//	double _salary;	// ��н
//}; // Employee����������
//
//// define set functions
//void Employee::set_id(long id)			// ����id
//{
//	_id = id;
//}
//
//void Employee::set_salary(double salary)	// ����salary
//{
//	_salary = salary;
//}
//
//void Employee::set_name(char* name)		// ����name
//{
//	_name = name;
//}
//
//void Employee::set_address(char* address)	// ����adress
//{
//	_address = address;
//}
//
//// define get functions
//long Employee::get_id()				// ����id
//{
//	return _id;
//}
//
//double Employee::get_salary()		// ���� salary
//{
//	return _salary;
//}
//
//char* Employee::get_name()			// ���� name
//{
//	return _name;
//}
//
//char* Employee::get_addressSecond()	// ���� address
//{
//	return _address;
//}
//
//// define Print
//void Employee::Print()	// ��ӡ���Employee�������Ϣ 
//{
//	cout << "id is " << _id << endl;
//	cout << "name is " << _name << endl;
//	cout << "address is " << _address << endl;
//	cout << "salary is " << _salary << endl;
//}
//
//int main()
//{
//	char name[] = "Lisi";
//	char address[] = "28 - 428";
//	Employee e1(20204912,name,address,2000);
//	e1.Print();
//	return 0;
//}







//4
//#include <iostream>
//using namespace std;
//
//class Student		//����Student��
//{
//public:
//	Student(int score)	// ���캯��
//		:_score(score)
//	{
//		++_count;
//		_total_score += _score;
//	}
//
//	~Student()	// ��������
//	{
//		_total_score-=_score;
//		_score = 0;
//		--_count;
//	}
//
//	void account(int);		// ���÷���
//	static int sum();		// �����ܳɼ�
//	static double average();	// ����ƽ���ɼ�
//	void print();			// ��ӡ���Student�������Ϣ  
//
//private:
//	int _score;				// ����
//	static int _total_score;		// �ܷ�
//	static int _count;			// ������
//}; // Student����������
//
//��̬��Ա������ʼ��
//int Student::_total_score = 0;
//int Student::_count = 0;
//
//void Student::account(int score)		// ���÷���
//{
//	_total_score -= _score;
//	_score = score;
//	_total_score += _score;
//}
//
//int Student::sum()		// �����ܳɼ�
//{
//	return _total_score;
//}
//
//double Student::average()	// ����ƽ���ɼ�
//{
//	return 1.0*_total_score / _count;
//}
//
//void Student::print()			// ��ӡ���Student�������Ϣ 
//{
//	cout << "This student's score is " << _score << endl;
//}
//
//int main()
//{
//	����
//	Student s1(30);
//	Student s2(70);
//	s2.account(90);
//	cout << Student::sum() << endl;
//	cout << Student::average() << endl;
//	return 0;
//}





//5
//#include <iostream>
//using namespace std;
//
//class magic			//����ħ������magic
//{
//public:
//	void getdata(int, int);			//�����ֵ��Ա����
//	void setfirstmagic();	//���ó�ʼħ����Ա����
//	void generate();			//��������ħ����Ա����
//	void printmagic();		//��ʾħ����Ա����
//
//private:
//	int _m[4][4];
//	int _step;
//	int _first;
//	int _sum;
//};
//
//void magic::getdata(int frist, int step)			//�����ֵ��Ա����
//{
//	_first = frist;
//	_step = step;
//	_sum = 15 * _step + 2 * frist;
//}
//
//void magic::setfirstmagic()	//���ó�ʼħ����Ա����
//{
//	int count = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			_m[i][j] = _first + count * _step;
//			count++;
//		}
//	}
//}
//
//void magic::generate()			//��������ħ����Ա����
//{
//	for (int i = 0; i < 4; i++)
//	{
//		_m[i][i] = _sum - _m[i][i];
//	}
//	_m[0][3] = _sum - _m[0][3];
//	_m[1][2] = _sum - _m[1][2];
//	_m[2][1] = _sum - _m[2][1];
//	_m[3][0] = _sum - _m[3][0];
//}
//
//void magic::printmagic()		//��ʾħ����Ա����
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << _m[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	magic m;
//	m.getdata(1, 2);
//	m.setfirstmagic();
//	m.generate();
//	m.printmagic();
//	return 0;
//}
