#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class student
{
    int Roll_no;
    char Name[20];

public:
      void input();
      void show();
};

void student::input()
{
    cout<<"Enter Roll No";
    cin>>Roll_no;
    fflush(stdin);
    cout<<"Enter Name";
    //cin>>Name;
    gets(Name);
}

void student::show()
{
    cout<<"\n Roll Number:"<<Roll_no;
    cout<<"\n Students Name:"<<Name;
}

int main()
{
    student s1;
    s1.input();
    s1.show();
    getch();
}