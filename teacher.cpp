#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class teacher
{
    int Emp_Code;
    char Emp_Name[20];
    long int Emp_Salary;
    //int name;
    public:
    void input();
    void show();
};

void teacher::input(){

    cout<<"Enter Emp Code";
    cin>>Emp_Code;
    fflush(stdin);
    cout<<"Enter your Name";
    cin>>Emp_Name;
    fflush(stdin);
    cout<<"Enter your Salary";
    cin>>Emp_Salary;
    //gets(name);
}

void teacher::show()
{
    cout<<"\n Emp_Code -> "<<Emp_Code;
    cout<<"\n Emp_Name -> "<<Emp_Name;
    cout<<"\n Emp_Salary -> "<<Emp_Salary;

}

int main()
{
    teacher t1;
    t1.input();
    t1.show();
    return 0;
}