#include<iostream>
using namespace std;

class Test
{
    int roll;
    char name[20];
    public:
    void input()
    {
        cout<<"Enter Roll ";
        cin>>roll;
        cout<<"Enter Name ";
        cin>>name;
    }
    void output()
    {
        cout<<endl<<"Roll = "<<roll<<endl;
        cout<<"Name = "<<name<<endl;
    }
};

int main()
{
    Test A;
    A.input();
    A.output();
    return 0;
}