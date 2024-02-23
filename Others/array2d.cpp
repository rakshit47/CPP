#include<iostream>
#include<math.h>    
using namespace std;

int main()
{
    int arr[3][3] = {45,76,23,3,86,19,32,27,54};
    //3,19,23,27,32,45,54,76,86
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=1,y=1,num=1,i,j,k,l,count,number;

    system("cls");

    for (k = 0; k < 3; k++)
    {
        for ( l = 0; l < 3; l++)
        {
            count = 0;
             for ( i = 0; i < 3; i++)
            {
                for ( j = 0; j < 3; j++)
                {
                    if (arr[k][l] > arr[i][j])
                    {
                        count++;
                    }
                }
            }
        }
        if(count == num) 
        {
            num = arr[k][l];
            x = k;
            y = l;
        }
    }
    cout<<"Enter the Desired Element : ";
    cin>>number;
    cout<<"Your "<<number<<" largest Element found at "<<x<<" , "<<y<<" index = "<<num<<endl;
    return 0;
}