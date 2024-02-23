#include<iostream>
using namespace std;

int main()
{
    int i = 5,j=69,k=12,l=34;
    cout<<"Address of "<<i<<" = "<<addressof(i)<<" "
        <<"\nAddress of "<<j<<" = "<< addressof(j)<<" "
        <<"\nAddress of "<<k<<" = "<<addressof(k)<<" "
        <<"\nAddress of "<<l<<" = "<<addressof(l);
    return 0;
}