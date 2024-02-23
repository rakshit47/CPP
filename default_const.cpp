#include <iostream>
using namespace std;

class stud
{
	int a, b;
	public:
	stud() //
	{
		a = 10;
		b = 20;
	}
	stud(int x, int y) //para const
	{
		a = x;
		b = y;
	}
	stud(stud& t) //copy const
	{
		a = t.a;
		b = t.b;
	}
	void show()
	{
		cout<<a<<" "<<b<<endl;
	}
	int operator+() //unary
	{
		a = a+2;
	}

	stud operator-(stud t) //binary
	{
		stud t2;
		t2.a = a + t.a;
		t2.b = b + t.b;
		return t2;
	}
};


int main()
{
	stud t,t2(5,8),t3(t2),t4; //a = 10, b = 20
	t.show();//1
	t2.show();//2
	t3.show();//3
	+t3; //unary
	t3.show();//4
	t4 = t-t2; //binary
	t.show();//5
	t4.show();
	return 0;
}