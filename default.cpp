#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int product(int a=2, int b=2, int c=2)
{
    return a*b*c;
}

int main()
{
    cout<<product(4,5);
    return 0;
}