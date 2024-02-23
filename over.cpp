#include<iostream>
#include<stdio.h>
//function over loading
using namespace std;

int sum(int a, int b)
{
    int add;
    add = a+b;
    return (add);
}

int main()
{
    cout<<sum(4,5)<<endl;
}