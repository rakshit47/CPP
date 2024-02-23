#include<iostream>
using namespace std;

class Test{

    int x;
    public:
    Test()
    {
        x=0;
    }
    Test(Test &A) //& 
    {
        x = A.x;
    }
    void input()
    {
        cout<<"Enter any number : ";
        cin>>x;
    }
    void show()
    {
        cout<<"\n"<<x;
    }
};

int main()
{
    Test t1;
    t1.input();
    Test prince(t1);
    t1.show();
    prince.show();
    return 0;
}