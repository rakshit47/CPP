#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
class student
{
   int rollno;
   char name[20];
   char branch[3];
   
   public:
      void getdata()
      {
         cout<<"Rollno: ";
         cin>>rollno;
         cout<<"Name: ";
         cin>>name;
         cout<<"Branch: ";
         cin>>branch;
         }

      void putdata()
      {
         cout<<"Rollno: "<<rollno<<"\tName: "<<name<<"\t Branch: "<<branch<<"\n";
      }

      int getrno()
      {
         return rollno;
      }

      void modify();
}stud1, stud,stud2;

void student::modify()
{
   cout<<"Rollno: "<<rollno<<"\n";
   cout<<"Name: "<<name<<"\tBranch: "<<branch<<"\n";

   cout<<"Enter new details.\n";
   char nam[20]=" ", br[3]=" ";
   cout<<"New name";
   cin>>nam;
   cout<<"New branch";
   cin>>br;
   strcpy(name, nam);
   strcpy(branch, br);
}

int main()
{
   fstream fio("abcde.dat", ios::in|ios::out);
   char ans='y';
   while(ans=='y' || ans=='Y')
   {
      stud.getdata();
      fio.write((char *)&stud, sizeof(stud));
      cout<<"Record added to the file\n";
      cout<<"\nWant to enter more ? (y/n)..";
      cin>>ans;
   }
//	fio.close();
//   clrscr();
   int rno;
   long pos;
   char found='f';

   cout<<"Enter rollno of student whose record is to be modified: ";
   cin>>rno;
//   fio.open("abcde.dat", ios::in| ios::out);

   fio.seekg(0,ios::beg);
   while(!fio.eof())
   {
      pos = fio.tellg();
      cout<<"\n"<<pos<<"\n";
      fio.read((char *)&stud1, sizeof(stud1));
      if(stud1.getrno() == rno)
      {
         stud1.modify();
         fio.seekg(pos);
         fio.write((char *)&stud1, sizeof(stud1));
         found = 't';
         break;
      }
   }
   if(found=='f')
   {
      cout<<"\nRecord not found in the file..!!\n";
      cout<<"Press any key to exit...\n";
      getch();
      exit(2);
   }
	
       fio.seekg(0,ios::beg);
       cout<<"Now the file contains:\n";
       while(fio.eof()==0)
       {
      fio.read((char *)&stud2, sizeof(stud2));
      stud2.putdata();
       }
       fio.close();
       getch();
       return 0;
}