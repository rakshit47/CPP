#include<iostream>
using namespace std;

class A //base class
{
    int x; //private member cannot be inherited
    protected:
    int y;
    public:
    int z;
};

class B:public A //derived class (sub class)
{
    int xx;
    protected:
    int yy;
    public:
    int zz;
    public:
    void input()
    {
        cout<<"Enter one number : ";
        cin>>zz;
    }
};

int main()
{
    B obj1;
    obj1.input();
    cout<<obj1.zz;
    return 0;
}

//OBJ of Class
// obj cannot access private and protected members of class
//obj can access only public members (data and methods)

// METHODS of Class
// methods can access all members of class

//private cannot be inherited
//protected can be inherited

//simple-multilevel-multi