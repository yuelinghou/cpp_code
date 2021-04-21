#define _CRT_SECURE_NO_WARNINGS 1

// 1
//#include <iostream>
//#include<assert.h>
//using namespace std;
//
//class Time
//{
//public:
//	//全缺省的默认构造函数
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
//class Location					//声明类Location
//{
//	friend double distance2(Location& L1, Location& L2);//友元函数，求两坐标点之间的距离
//
//public:
//	Location(double x=0.0, double y=0.0)//构造函数	
//		:_x(x)
//		,_y(y)
//	{}
//
//	double Getx();				//成员函数，取x坐标的值
//	double Gety();				//成员函数，取y坐标的值
//	double distance1(Location& L);//成员函数，求两坐标点之间的距离
//
//private:
//	double _x;
//	double _y;
//};
//
//double Location::Getx()				//成员函数，取x坐标的值
//{
//	return _x;
//}
//
//double Location::Gety()				//成员函数，取y坐标的值
//{
//	return _y;
//}
//
//double Location::distance1(Location& L)//成员函数，求两坐标点之间的距离
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
//class Employee		//声明Employee类
//{
//public:
//	Employee(long id = 0, char* name = nullptr, char* address = nullptr, double salary = 0.0)// 构造函数
//		:_id(id)
//		, _name(name)
//		, _address(address)
//		, _salary(salary)
//	{}
//
//	~Employee()	// 析构函数
//	{
//		_id = 0;
//		_name = nullptr;
//		_address = nullptr;
//		_salary = 0.0;
//	}
//
//	// set functions
//	void set_id(long);			// 设置id
//	void set_salary(double);	// 设置salary
//	void set_name(char *);		// 设置name
//	void set_address(char*);	// 设置adress
//
//	// get functions
//	long get_id();				// 返回id
//	double get_salary();		// 返回 salary
//	char* get_name();			// 返回 name
//	char* get_addressSecond();	// 返回 address
//
//	//Print
//	void Print();	// 打印输出Employee的相关信息  
//
//private:
//	long _id;		// 工号
//	char* _name;    // 姓名
//	char* _address;	// 家庭住址
//	double _salary;	// 月薪
//}; // Employee类声明结束
//
//// define set functions
//void Employee::set_id(long id)			// 设置id
//{
//	_id = id;
//}
//
//void Employee::set_salary(double salary)	// 设置salary
//{
//	_salary = salary;
//}
//
//void Employee::set_name(char* name)		// 设置name
//{
//	_name = name;
//}
//
//void Employee::set_address(char* address)	// 设置adress
//{
//	_address = address;
//}
//
//// define get functions
//long Employee::get_id()				// 返回id
//{
//	return _id;
//}
//
//double Employee::get_salary()		// 返回 salary
//{
//	return _salary;
//}
//
//char* Employee::get_name()			// 返回 name
//{
//	return _name;
//}
//
//char* Employee::get_addressSecond()	// 返回 address
//{
//	return _address;
//}
//
//// define Print
//void Employee::Print()	// 打印输出Employee的相关信息 
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
//class Student		//声明Student类
//{
//public:
//	Student(int score)	// 构造函数
//		:_score(score)
//	{
//		++_count;
//		_total_score += _score;
//	}
//
//	~Student()	// 析构函数
//	{
//		_total_score-=_score;
//		_score = 0;
//		--_count;
//	}
//
//	void account(int);		// 设置分数
//	static int sum();		// 返回总成绩
//	static double average();	// 返回平均成绩
//	void print();			// 打印输出Student的相关信息  
//
//private:
//	int _score;				// 分数
//	static int _total_score;		// 总分
//	static int _count;			// 总人数
//}; // Student类声明结束
//
//静态成员变量初始化
//int Student::_total_score = 0;
//int Student::_count = 0;
//
//void Student::account(int score)		// 设置分数
//{
//	_total_score -= _score;
//	_score = score;
//	_total_score += _score;
//}
//
//int Student::sum()		// 返回总成绩
//{
//	return _total_score;
//}
//
//double Student::average()	// 返回平均成绩
//{
//	return 1.0*_total_score / _count;
//}
//
//void Student::print()			// 打印输出Student的相关信息 
//{
//	cout << "This student's score is " << _score << endl;
//}
//
//int main()
//{
//	测试
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
//class magic			//声明魔方阵类magic
//{
//public:
//	void getdata(int, int);			//输入初值成员函数
//	void setfirstmagic();	//设置初始魔方成员函数
//	void generate();			//生成最终魔方成员函数
//	void printmagic();		//显示魔方成员函数
//
//private:
//	int _m[4][4];
//	int _step;
//	int _first;
//	int _sum;
//};
//
//void magic::getdata(int frist, int step)			//输入初值成员函数
//{
//	_first = frist;
//	_step = step;
//	_sum = 15 * _step + 2 * frist;
//}
//
//void magic::setfirstmagic()	//设置初始魔方成员函数
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
//void magic::generate()			//生成最终魔方成员函数
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
//void magic::printmagic()		//显示魔方成员函数
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
