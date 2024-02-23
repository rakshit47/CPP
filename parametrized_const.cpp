#include<iostream>
using namespace std;

class Test 
{
    int x;
    public:
    Test()
    {
        x = 0;
    }
    Test(int a) //parametrized
    {
        x = a;
    }

    void show()
    {
        cout<<"Parametrized Constructor \nValue of X : "<<x<<endl;
    }
};

int main()
{
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    Test t(x);
    t.show();
    return 0;
}