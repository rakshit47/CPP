#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int product(int x, int y, int z)
{
    return x*y*z;
}

int main()
{
    int a,b,c;
    cout<<"Enter any three number"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum of three number is "<<product(a,b,c);
    return 0;
}