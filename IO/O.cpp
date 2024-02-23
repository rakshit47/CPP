#include <fstream>
#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main () 
{
char data[100]; //for usr input
ofstream outfile; //object outfile
outfile.open("afile.txt"); // create a file with name aflie.txt and open it for operations

cout << "Writing to the file" << endl;
cout << "Enter your name: \n"; 

gets(data); 

outfile << data << endl;//not console output writing in the object
cout << "Enter your age: \n"; 
cin >> data;
//cin.ignore();
outfile << data << endl;
outfile.close(); //closing the opened file

ifstream infile; //opening the file for reading
infile.open("afile.txt"); 
cout << "Reading from the file" << endl; 

do{
    infile >> data;
    cout << data <<endl;
}while(!infile.eof());
// while(!infile.eof())
// {
// //infile >> data; 
// //cout << data << endl; 
// //infile >> data; 
// //cout << data << endl; 
// }
infile.close();
return 0;
}