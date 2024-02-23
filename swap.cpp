#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int sawp(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return 0;
}

int main()
{
    int a,b;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    cout<<"Before Swaping a = "<<a<<" and b = "<<b;
    swap(a,b);
    cout<<"\nAfter Swaping a = "<<a<<" and b = "<<b;
    return 0;
}