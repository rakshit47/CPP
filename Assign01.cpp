#include<iostream>

using namespace std;

int main()
{
    //01.Write a program to accept marks of 10 students and display it on screen.
    // int marks[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Enter marks for "<<i+1<<" Subject ";
    //     cin>>marks[i];
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Marks for "<<i+1<<" Subject is "<<marks[i]<<endl;
    // }
    // return 0;

    //02.Write a program to accept marks of 5 subjects of a student and display total marks obtained by the student.
    int student[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter marks for "<<i+1<<" Subject ";
        cin>>student[i];      
        sum = sum + student[i];
    }
    cout<<"Total Marks obtained by the student is "<<sum<<endl;
    return 0;

    //03.Write a program to accept input of 15 elements and it in reverse order.
    /*int mat[15];
    for (int i = 0; i < 15; i++)
    {
        cout<<"Enter "<<i+1<<" Element ";
        cin>>mat[i];
    }
    for (int i = 14; i >= 0; i--)
    {
        cout<<mat[i]<<endl;
    }
    return 0;*/

    //04.Write a program to accept input of 7 elements and display elements with odd values.
    /*int mat[7];
    for (int i = 0; i < 7; i++)
    {
        cout<<"Enter "<<i+1<<" Element ";
        cin>>mat[i];
    }
    for (int i = 0; i < 7; i++)
    {
        if (mat[i]%2!=0)
        {
            cout<<mat[i]<<endl;
        }
    }
    return 0;*/

    //05.Write a program to accept input of 9 elements and display elements stored at odd position (index).
    /*int mat[9];
    for (int i = 0; i < 9; i++)
    {
        cout<<"Enter any Element ";
        cin>>mat[i];
    }
    for (int i = 0; i < 9; i++)
    {
        if (i%2!=0)
        {
            cout<<mat[i]<<endl;
        }
    }
    return 0;*/

//Q.6 Write a program to accept input of 12 elements and display elements with even values.

// int marks[12];

// for (int i = 0; i < 12; i++)
// {
//     cout<<"Enter Element ";
//     cin>>marks[i];
// }
// cout<<"All Even Elements are: "<<endl;
// for (int i = 0; i < 12; i++)
// {
//     if (marks[i]%2==0)
//     {
//         cout<<marks[i]<<" ";
//     }
// }

//Q.7 Write a program to accept input of 14 elements and display elements stored at even position (index).

// int marks[14];

// for (int i = 0; i < 14; i++)
// {
//     cout<<"Enter Element ";
//     cin>>marks[i];
// }
// cout<<"All Elements at Even Index are: "<<endl;
// for (int i = 0; i < 14; i++)
// {
//     if (i%2==0)
//     {
//         cout<<marks[i]<<" ";
//     }
// }

}