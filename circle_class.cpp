#include<iostream> 
using namespace std;
#define pi 3.14

class circle 
{
    int radius;
    static int cnt;
    public:
    circle()//SAME AS NAME OF CLASS -> CONSTRUCTOR
    {
        radius = 5;
        cnt++;
    }
    void enter();
    void arpe();
};

void circle::enter()
{
    cout<<"Enter radius ";
    cin>>radius;
}

void circle::arpe()
{
    cout<<"Area of Circle is = "<<pi*radius*radius<<endl;
    cout<<"Perimeter of Circle is = "<<2*pi*radius<<endl<<cnt;
}

int circle::cnt =0;

int main()
{
    circle c,c2,c3,c4;
    c.arpe();
    c.enter();
    c.arpe();
    return 0;
}