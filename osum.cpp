#include<iostream>
//define a find. the function will calculate and return sum of all oddnumbers from 1 to 10.

using namespace std;

int find(int a, int b)
{
    int sum;
    for (int i = a; i < b+1; i++)
    {
        if (i % 2 != 0) 
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int x = 1,y=10;
    cout<<find(x,y)<<endl;
}
