#include<iostream>
using namespace std;

class Test{
    int x;
    public:
    void add(Test t1, Test t2)
    {
        x = t1.x +t2.x;
    }
    void show();
    void in()
    {
        cout<<"Enter any number : ";
        cin>>x;
    }

};

void Test::show()
{
    cout<<"Sum ="<<x;
}

int main()
{
    Test t1,t2,t3;
    t1.in();
    t2.in();
    t3.add(t1,t2);
    t3.show();
    return 0;
}