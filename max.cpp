#include<iostream>
#include<stdio.h>

using namespace std;

int max(int a, int b)
{
   if (a>b) return (a);
   else return (b);
}

int main()
{
    int x,y;
    cout<<"Enter 1st number"<<endl;
    cin>>x;
    cout<<"Enter 2st number"<<endl;
    cin>>y;
    cout<<max(x,y);
    return 0;
}