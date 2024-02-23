#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i,num[] = {96,64,32,54,89,67,76,71,90,107};

    ofstream out; //creating out objectof class oftream
    out.open("01.txt");
    out.write((char*)&num,sizeof(num));
    out.close();

    for (int i = 0; i < 7; i++) num[i] = 0;
    
    ifstream in; //creating in objectof class iftream
    in.open("01.txt");
    in.read((char*)&num,sizeof(num));

    for (int i = 0; i < 7; i++) cout<<num[i]<<"\t";
    
    return 0;
}

//file pointer 
// get 
// put 

// seekp(10,ios::beg);
// seekg(-4,ios::end);
// tellp(); - tells the address of the file
// tellg();

//cout<<intellg