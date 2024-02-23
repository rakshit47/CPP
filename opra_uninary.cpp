//Uninary Operators

#include<iostream>
using namespace std;

class test{
    int x;
    public:
    test() { x=0; }

    void operator ++() { x=x-5; } //change according to their need 

    void show() { cout<<x<<endl; }

    void input() { cout<<"Enter number : "; cin>>x; }
};

int main()
{
    test t;
    ++t;
    t.show();
    t.input();
    ++t;
    t.show();
    ++t;
    t.show();
    ++t;
    t.show();
    return 0;
}

//unirary and binary operator