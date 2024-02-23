#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

void fun(int *a, int *b)
{
    *a = 30;
    *b = 40;
    cout<<*a<<*b;
}

int main()
{
    int x = 20, y = 25;
    fun(&x,&y);
    cout<<x<<y;
    return 0;
}