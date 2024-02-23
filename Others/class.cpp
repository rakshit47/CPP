#include<iostream>
using namespace std;

class Test{
    int a,b;
    public:
    void input();
    Test()
    {
        a=9;
        b=4;
    }
    friend int show(Test);
};

void Test::input()
{
    cout<<"Enter two number : ";
    cin>>a>>b;
}

int show(Test X)
{
    cout<<X.a<<" "<<X.b;
}

int main()
{
    Test T,Y,I;
    //55T.input();
    show(T);
    return 0;
}