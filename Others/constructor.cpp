#include<iostream>
using namespace std;

class Test
{
  int x,y;
  public:
  Test()
  {
    x = 5;
    y = 10;
  }
  Test(int a, int b)
  {
    x = a;
    y = b;
  }
  Test(Test& T)
  {
    x = T.x;
    y = T.y;
  }
  Test operator+(Test T)
  {
    Test T2;
    T2.x = x + T.x;
    T2.y = y + T.y;
    return T2;
  }
  Test operator++()
  {
    x = x + 5;
    y = y + 4;
  }
  void show()
  {
    cout<<endl<<"Value of X : "<<x<<endl<<"Value of Y : "<<y<<endl;
  }
  ~Test()
  {
    cout<<"Destroied Constructor! "<<endl;
  }
  friend Test operator+(Test N);
};

Test operator+(Test N)
{
  
};

int main()
{
  Test t,t2(7,9),t3(t2),t4,t5;
  t.show();
  t2.show();
  t3.show();
  ++t4;
  t4.show();
  t5 = t3 + t4;
  t5.show();
  return 0;
}