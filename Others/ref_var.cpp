#include<iostream>
using namespace std;

int main()
{
    int i,j;
    i = 9;
    int& r = i; //reference variable
    i = 3;
    // r = 17;  //refernce value can bechanged reversed
    cout<<r<<" "<<i;
}