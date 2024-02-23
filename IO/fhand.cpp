#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	fstream io_obj;
	io_obj.open("abc.txt",ios::in|ios::out);
	char str[20];
	io_obj<<"Welcome to C++ Class";
	io_obj.seekg(0);
	while (io_obj.eof()==0)
	{
		io_obj>>str;
		cout<<str<<" ";
	}
	io_obj.close();
}