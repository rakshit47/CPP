#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int check(int n)
{
    if (n%2==0) cout<<"It is an Even Number"<<endl;
    else if (n%2!=0) cout<<"It is an Odd Number"<<endl;
    //else cout<<"Error Invalid Input"<<endl;
    return 0;
}

int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    check(a);
}