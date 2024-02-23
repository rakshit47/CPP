#include<iostream>
using namespace std;


int main()
{
    int arr[3][3] = {1,2,3,4,2,5,6,7,9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if (arr[i][j]==arr[k][l])
                    {
                        // arr[k][l] = 0;
                        cout<<0<<" ";
                    }
                    // else cout<<endl;
                    
                }
            }

        }
    
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}