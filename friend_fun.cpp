#include<iostream>
using namespace std;

class Test
{
        int x,y;
        public:
        void input()
        {
            cout<<"Enter any Number : ";
            cin>>x>>y;
        }
        friend void fun(Test); //declaretion of friend function 1 // fun(obj)
};
//outside the 
void fun (Test t1) //using friend function outside the class using class obj
{
    cout<<t1.x<<" "<<t1.y; //reaching to class variables with the help of obj
}

int main()
{   
    Test t1;
    t1.input();
    fun(t1);//
    return 0;
}