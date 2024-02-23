#include<iostream>
using namespace std;
class pri
{
    char array[20];
    int sal;
    public:
    void input()
    {
        cout<<"Enter name:";
        cin>>array;
        cout<<"Enter salary:" ;
        cin>>sal;
    }
void show()
{
    cout<<"\n Name = "<<array;
    cout<<"\n salary = "<<sal;
}
};
int main()
{
  pri  p1[5];
for (int i = 0; i < 5; i++)
    p1[i].input();
    for (int i = 0; i < 5; i++)
    p1[i].show();
  return 0;
}