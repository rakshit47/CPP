#include<iostream>
using namespace std;

class Example {
    
    public:
    int a,b;
    void in()
    {
        cout<<"Enter any NUm : ";
        cin>>a>>b;
    }
};
Example add() //constructor function 
    {
        Example T3; //obj creating
        T3.a = 80;
        T3.b = 20;

        cout<<"Sum of a and b : "<<T3.a + T3.b;
        
        return T3; //retrning same obj
    }

int main()
{
    Example E3;
    E3 = add(); //using function through other obj
	return 0;
}