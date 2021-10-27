#include <iostream>
using namespace std;

class A
{
  public:
  void f()
  {
    delete this;
  }
};
//
//class B : public A
//{
//  public:
//  virtual void f()
//  {
//    cout<<"B"<<endl;
//  }
//};

//static int a = 1;
//
//void Func()
//{
//  static int a = 4;
//}

int main()
{
  //cout<<a<<endl;
  //Func();
  //cout<<a<<endl;
  A* p = new A;
  p->f();
  p->f();
  return 0;
}
