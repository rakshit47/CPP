#include<iostream>

using namespace std;

int main()
{
    int i,j,sum;
    int mat1[3][3] = {2,3,4,5,6,7,8,2,1};
    int mat2[3][3] = {3,6,2,5,6,7,8,1,9};
    int product[3][3];
    product[0][0] = 0;
    
    cout<<"First 3x3 Matrix"<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;   
    }
    
    cout<<"Second 3x3 Matrix"<<endl;
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;   
    }
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum+=mat1[i][k]*mat2[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
        cout<<endl;   
    }
    
    cout<<"Product of 3x3 Matrix"<<endl;
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<product[i][j]<<" ";
        }
        cout<<endl;   
    }
    return 0;
}