#include<iostream>
using namespace std;

class A 
{
    public:
    A() //base class constructor
    {
        cout<<"Hello ";
    }

};

class B : public A
{
    public:
    B()
    {
        cout<<"Good Morning";
    }
};

int main()
{
    B p;
    return 0;
}

// for i as integer

// for i = 20 to 1 step -1

