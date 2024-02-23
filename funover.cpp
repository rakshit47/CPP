#include<iostream>
#include<stdio.h>

using namespace std;

int sum(int a, int b)
{
    int add;
    add = a+b;
    return (add);
}

int sum(int a, int b, int c)
{
    int add;
    add = a+b+c;
    return (add);
}

int sum(int a, int b, int c, int d)
{
    int add;
    add = a+b+c+d;
    return (add);
}

int sum(int a, int b, int c, int d, int e)
{
    int add;
    add = a+b+c+d+e;
    return (add);
}

int main()
{
    int a;
    cout<<"How many number do you want to add together ?\n"<<endl;
    cin>>a;
    if (a==2) 
    {
        int x,y,result;
        cout<<"Enter two num";
        cin>>x>>y;
        result = sum(x,y);
        cout<<result<<endl;
    }
    else if (a==3)
    {
        int x,y,z;
        cout<<"Enter three num";
        cin>>x>>y>>z;
        cout<<sum(x,y,z)<<endl;
    }
    else if (a==4)
    {
        int x,y,z,v;
        cout<<"Enter four num";
        cin>>x>>y>>z>>v;
        cout<<sum(x,y,z,v)<<endl;
    }
    else if (a==5)
    {
        int x,y,z,v,w;
        cout<<"Enter five num";
        cin>>x>>y>>z>>v>>w;
        cout<<sum(x,y,z,v,w)<<endl;
    }
    else if (a>5) cout<<"\nToo many numbers for adding up..Sorry"<<endl;
    else cout<<"Error"<<endl;
}