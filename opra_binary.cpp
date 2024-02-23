#include<iostream>
using namespace std;

class test{
    int x;
    public:
    test()
    {
        x=0;
    }

    test operator +(test a)
    {
        test temp;
        temp.x = x-a.x;
        return temp;
    }
    void input()
    {
        cout<<"Enter any Number : ";
        cin>>x;
    }

    void show()
    {
        cout<<"\nValue of X = "<<x<<endl;
    }
};

int main()
{
    test t1,t2,t3;
    t1.input();
    t2.input();
    t3 = t1 + t2;
    t3.show();
    return 0;
}