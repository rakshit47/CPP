#include<iostream>
#include<math.h>
using namespace std;

int main()
{   
    int arr[] = {54,1000,12,5,2,16,98,68,45,76,71,103,90,32,64,59}; 
    //1,2,3,4,5,6,7,8,9,10,11,12,13,14,145
    //2,5,12,16,32,45,54,59,64,68,76,71,90,98,103
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=1,y=1,mid,i,count;

    system("cls");

    for (i = 0; i < n; i++)
    {
        if(arr[i]>x)
        {
            x=arr[i];
        }
    }

    for (i = 0; i < n ; i++)
    {
        if(arr[i]>y && arr[i]!=x)
        y=arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        count = 0;
        for ( i = 0; i < n; i++)
        {
            if (arr[j] >= arr[i])
            {
                count++;
            }
            
        }
        if(count == ceil(n/2) - 1) 
        {
            mid = arr[j];
        }
    }
    
    cout<<"Number of Elements : "<<n<<endl;
    cout<<"Largest Element : "<<x<<endl;
    cout<<"Second Largest Element : "<<y<<endl;
    cout<<"Middle Element : "<<mid<<endl;

    return 0;
}