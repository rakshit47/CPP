#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
using namespace std;
int n = 100;
int main()
{
    system("CLS");
    int a, i, c, cnt = 0, sum = 0, size = 0, arr[n] = {32};
    cout << "Enter Numbers : " << endl
         << endl;
    for (i = 1; i < n; i++)
    {
        a = getchar();
        if (a == 32 || a == 10 || a == 45 || a >= 48 && a <= 57)
        {
            if (a == 10)
            {
                n = i;
                goto X;
            }
            else
                arr[i] = a;
            if (a == 32)
                size++;
        }
    }
    cout << endl
         << endl;
X:
    ++size;
    int array[size] = {};
    c = size;
    // cout<<n<<endl;
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] != 32)
        {
            if (arr[i] == 45)
            {
                sum = -sum;
            }
            else
                sum = sum + ((arr[i] - 48) * (pow(10, cnt)));
        V:
            cnt++;
        }
        else
        {
            c = c - 1;
            array[c] = sum;
            sum = 0;
            cnt = 0;
        }
    }
    cout << "Size of Array : " << sizeof(array) / 4 << endl;
    cout << "Output: " << endl;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    // cout<<endl<<"Invalid Input";
}
// enter - 13
// spcae - 32 int a; a = getch();

// 32 45 47 32