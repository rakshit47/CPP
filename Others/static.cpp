#include<iostream>
using namespace std;
class Test{
    static int x,y;
    public:
    static void sum()
    {
        cout<<"Sum ="<<x+y;
    }
};

int Test::x = 89;
int Test::y = 65;

int main()
{
    Test::sum();
    return 0;
}