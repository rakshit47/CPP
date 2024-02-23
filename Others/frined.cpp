#include<iostream>
using namespace std;

class A
{
    int x;
    public:
    A()
    {
        x=4;
    }
    friend void show(A);
};

void show(A T)
{
    cout<<T.x;
}

int main()
{
    A tar;
    show(tar);
    return 0;
}