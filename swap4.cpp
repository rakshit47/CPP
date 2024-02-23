#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

void sawp(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    getch();
}

int main()
{
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    fflush(stdin);
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Before Swaping a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);
    cout<<"After Swaping a = "<<a<<" and b = "<<b<<endl;
    return 0;
}