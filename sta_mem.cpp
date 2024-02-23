//static member 
#include<iostream> 
using namespace std;
class Test
{
    public:
    int x;
    static int y; //static member variable
    static void count() //static member function private
    {
        y++;
    }
    static void show()//public member function
    {
        count();//access to a static
        cout<<y;
    }
};
//int Test::x = 9;
int Test::y = 4;//scope resolution initialization

int main()
{
    // Test::y;
    Test::show();
    return 0;
}
//static data member -> can be accessed by both static and non-static function
//scope resuolution - ::