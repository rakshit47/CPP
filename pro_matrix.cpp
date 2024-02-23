#include<iostream>

using namespace std;

int main()
{
    int pro[2][2];
    int s,j;
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{1,2},{3,4}};
    for (int i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
        pro[i][j] = (a[i][i] * b[i][i]) + (a[i][j+1] * b[j+1][i]);
        cout<<pro[i][j]<<endl;
        }
    }
    return 0;
}

a[0][0] * b[0][0] + a[0][1] * b[1][0]

a[0][0] * b[0][1] + a[0][1] * b[1][1]

a[0][0] * b[0][0] + a[0][1] * b[1][0]