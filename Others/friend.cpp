#include<iostream>
using namespace std;

class Test{
    int x;
    public:
    Test()
    {
        x =15;
    }
    friend void show(Test);
};

void show(Test T)
{
    cout<<T.x;
}

int main()
{
    Test T;
    show(T);
    return 0;
}