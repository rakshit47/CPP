#include<iostream>
using namespace std;

void add(int a, int b);

int main()
{
    add(9,1);
    return 0;
}

void add(int a, int b)
{
    cout<<"sum = "<<a+b;
}