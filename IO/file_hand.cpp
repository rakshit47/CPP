#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
	int i,num[]={97,98,99,100, 101,102,103};
	ofstream out;
	out.open("01.txt",ios::app);
	cout<<out.tellp()<<"\n";		
	out.write((char*)&num,sizeof(num));
	//seekp(10,ios::beg);
	cout<<out.tellp()<<"\n";
	out.close();
	
	//file pointer
	//get 
	//put
	
	
	//seekg();
//	tellg();
	
	for(i=0;i<7;i++)
	num[i]=0;
	
	ifstream in;
	in.open("01.txt");
//	seekg(-4,ios::);
	cout<<in.tellg()<<"\n";		

	in.read((char*)&num, sizeof(num));
	cout<<in.tellg()<<"\n";		
	in.seekg(0,ios::end);
	cout<<in.tellg()<<"\n";		
	for(i=0;i<7;i++)
	cout<<num[i]<<"\t";
	in.close();
	return 0; 
}