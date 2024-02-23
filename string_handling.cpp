#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

using namespace std;
int main()
{
    char Name[20]="Devanshu Singh";
    int i=0;
    for ( i = 0; i < strlen(Name); i+=2)
    {
        if(isupper(Name[i]))
        Name[i]=Name[i]+1;
        else
        Name[i]=Name[i]+2;
    }
    cout<<Name;

}