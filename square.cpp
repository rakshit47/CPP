#include<iostream>
#include<stdio.h>

using namespace std;

int square(int a)
{
   return (a*a);
}

int main()
{
    int x;
    cout<<"Enter any number"<<endl;
    cin>>x;
    cout<<square(x);
    return 0;
}