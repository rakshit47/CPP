#include<iostream> 
using namespace std;

int main()
{
    system("CLS");
    //Q.1 Write a program to accept input of 2x3array and display it in the form of matrix.

    // int mat[2][3];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"Enter any Element : ";
    //         cin>>mat[i][j];
    //     }
        
    // }
    // cout<<endl<<"2x3 Matrix :"<<endl;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<" "<<mat[i][j];
    //     }
    //     cout<<endl;
    // }
    
    //Q.2 Write a program to accept input of 4x4matrix and display first row of elements.
    // int mat[4][4];
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<"Enter any Element : ";
    //         cin>>mat[i][j];
    //     }
        
    // }
    // cout<<endl<<"Row 1 of 4x4 Matrix :"<<endl;
    // for (int i = 0,j=0; j < 4; j++)
    // {
    //     cout<<" "<<mat[i][j];
    // }
    
    //Q.3 Write a program to accept input of 4x4matrix and row number to be displayed. Display the given row of elements.

    // int mat[4][4];
    // int row;
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<"Enter any Element : ";
    //         cin>>mat[i][j];
    //     }
        
    // }
    // cout<<endl<<"Enter row to be displayed : ";
    // cin>>row;
    // cout<<"Row "<<row<<" of 4x4 Matrix :"<<endl;
    // for (int i = row-1,j=0; j < 4; j++)
    // {
    //     cout<<" "<<mat[i][j];
    // }

    //Q.4 Write a program to accept input of 3x3matrix, column number to be displayed. Display the given column of elements.
    // int mat[3][3];
    // int col;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"Enter any Element : ";
    //         cin>>mat[i][j];
    //     }
        
    // }
    // cout<<endl<<"Enter col to be displayed : ";
    // cin>>col;
    // cout<<"Col "<<col<<" of 3x3 Matrix :"<<endl;
    // for (int i = 0,j=col-1; i < 3; i++)
    // {
    //     cout<<" "<<mat[i][j];
    // }

    //Q.5 Write a program to accept input of 2x2matrix and display sum of all elements.
    // int mat[2][2];
    // int sum=0;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout<<"Enter any Element : ";
    //         cin>>mat[i][j];
    //         sum +=mat[i][j];
    //     }
    // }
    // cout<<"Sum of all elements of 2x2 matrix is "<<sum;

    //Q.6 Write a program to accept input of 5x5matrix and display sum of left diagonal and right diagonal elements.
    // int mat[5][5];
    // int i,j,lsum=0,rsum=0;
    // for ( i = 0; i < 5; i++)
    // {
    //     for ( j = 0; j < 5; j++)
    //     {
    //         cout<<"Enter "<<i<<" "<<j<<" Element : ";
    //         cin>>mat[i][j];
    //     }
    // }
    // for ( i = 0; i < 5; i++)
    // {
    //     for ( j = 0; j < 5; j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for ( i = 0; i < 5; i++)
    // {
    //     for ( j = 0; j < 5; j++)
    //     {
    //         if (i==j) lsum += mat[i][j];
    //         else if (i+j==4) rsum += mat[i][j];
    //     }   
    // }
    // cout<<"Sum of Left Diagonal of 5x5 Matrix is "<<lsum<<endl;
    // cout<<"Sum of Right Diagonal of 5x5 Matrix is "<<rsum+mat[2][2];

    //Q.7 Write a program to accept input of two 2x2 matrix and display sum of both matrix.

    // int i,j,mat1[2][2],mat2[2][2],mat[2][2];
    // for ( i = 0; i < 2; i++)
    // {
    //     for ( j = 0; j < 2; j++)
    //     {
    //         cout<<"Enter element for 1st Matrix : ";
    //         cin>>mat1[i][j];
    //     }
    // }
    // cout<<endl;
    // for ( i = 0; i < 2; i++)
    // {
    //     for ( j = 0; j < 2; j++)
    //     {
    //         cout<<"Enter element for 2nd Matrix : ";
    //         cin>>mat2[i][j];
    //     }
    // }
    // for ( i = 0; i < 2; i++)
    // {
    //     for ( j = 0; j < 2; j++)
    //     {
    //         mat[i][j] = mat1[i][j] + mat2[i][j];
    //     }
    // }
    // cout<<"Sum of two Matrix : "<<endl;
    // for ( i = 0; i < 2; i++)
    // {
    //     for ( j = 0; j < 2; j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Q.8 Write a program to accept input of two 3x3 matrix and display product of both matrix.
    // int i,j,mat1[3][3],mat2[3][3],mat[3][3];
    // for ( i = 0; i < 3; i++)
    // {
    //     for ( j = 0; j < 3; j++)
    //     {
    //         cout<<"Enter element for 1st Matrix : ";
    //         cin>>mat1[i][j];
    //     }
    // }
    // cout<<endl;
    // for ( i = 0; i < 3; i++)
    // {
    //     for ( j = 0; j < 3; j++)
    //     {
    //         cout<<"Enter element for 2nd Matrix : ";
    //         cin>>mat2[i][j];
    //     }
    // }
    // for ( i = 0; i < 3; i++)
    // {
    //     for ( j = 0; j < 3; j++)
    //     {
    //         mat[i][j] = mat1[i][j] * mat2[i][j];
    //     }
    // }
    // cout<<"Prodduct of two Matrix : "<<endl;
    // for ( i = 0; i < 3; i++)
    // {
    //     for ( j = 0; j < 3; j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}