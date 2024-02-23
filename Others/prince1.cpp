#include<iostream>
using namespace std;
class pri
{
  int a,b,c;
  public:
    friend void input(pri);
};
void input(pri p)
{
    cout<<"Enter any two number : ";
    cin>>p.a>>p.b;
    p.c = 2*(p.a+p.b);
    cout<<" Paremeter of rectangle = "<<p.c;
}
int main()
{
    pri p1;
    input(p1);
    return 0;
}