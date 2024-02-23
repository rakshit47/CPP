#include <iostream>
#include <iomanip>
using namespace std;

void val(int *row, int *col, int *gap)
{
    int r = *row - 1;
    if (r == 0)
    {
        *row = 1;
        *col = 1;
        *gap = 0;
    }
    else
    {
        *row = 2 * r;
        *col = 3 + (2 * r);
        *gap = *row - 1;
    }
}

int main()
{
    int row, col, gap, c, d = 1;
    system("CLS");
    cout << "Enter Row for Pyramid : ";
    cin >> row;
    cout<<endl<<"Pyramid for "<<row<<" row :"<<endl;
    val(&row,&col,&gap);
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c = 0;
            if ((i+j >= gap && i+j <= d) || c == 1)
            {
                cout<<" * ";
                c=1;
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
        d+=2;
    }
    // for (int i = 0; i < row; i++)
    // {
    //     cout << setw(row - i)
    //          << setfill('-') << '*'
    //          << setw(i * 2 + 1)
    //          << setfill('*') << '\n';
    // }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row - i - 1; j++)
    //     {
    //         cout << ' ';
    //     }
    //     for (int k = 0; k <= i * 2; k++)
    //     {
    //         cout << '*';
    //     }
    //     cout << endl;
    // }

    return 0;
}

// 1row - 1,1,0
// 2row - 2,5,1
// 3row - 4,7,3
// 4row - 6,9,5
// 5row - 8,11,7
// 6row - 10,13,9
// 7row - 12,15,11