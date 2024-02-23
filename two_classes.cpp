#include<iostream>
#include<conio.h>
using namespace std;

class one
{
    int num;
    public:
    void input()
    {
        cout<<"Enter Your Number "<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<endl<<"Your number "<<num<<endl;
    }
};

class two
{
    int num;
    public:
    void input()
    {
        cout<<"Enter Your Number "<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<endl<<"Your number "<<num<<endl;
    }
};


int main()
{
    one x,y;
    two i;
    x.input();
    x.display();
    cout<<endl;
    y.input();
    y.display();
    getch();
}