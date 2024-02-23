#include<iostream>
using namespace std;

class A
{
    public:
    int x;
    // char n[10];
};

class B: virtual public A
{
    int y;
    //int x;
    // char n1[10];
};

class C:  virtual public A
{
    int z;
    //int x;
};

class D: public B, public C
{
    public:
    D()
    {
        cout<<"Hello"<<endl;
    }
};

int main()
{
    D a;
    cout<<sizeof (a);
    // cout<<a.x;
    return 0;
}