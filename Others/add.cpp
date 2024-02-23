#include<iostream> 
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter any two numbers ";
    cin>>a>>b;
    cout<<"Enter your Choice : \n 1.Add\n 2.Sub \n 3.Multiply \n 4.Divide\n ";
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<"Sum of two numbers is "<<a+b<<endl;
        main();
    case 2:
        cout<<"Difference of two number is "<<a-b<<endl;
        main();
    case 3:
        cout<<"Product of two number is "<<a*b<<endl;
        main();
    case 4:
        cout<<"Division of two number is "<<a/b<<endl;
        main();
    case 5:
        cout<<"SHUTTING DOWN...."<<endl;
        break;
    default:
        cout<<"Error"<<endl;
        break;
    }
    return 0;
}