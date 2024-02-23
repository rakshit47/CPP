#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

void fun(int b)
{
    b = 5;
    cout<<"Fun = "<<b<<endl;
}

int main(void)
{
    int a = 3;
    cout<<a<<endl;
    fun(a);
    cout<<a<<endl;
}