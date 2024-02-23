#include<iostream>
#include<string.h>
using namespace std;
void print(int arr[], int n){
	cout<<endl<<"Array : ";
	for(int j=0 ; j<n ; j++) cout<<arr[j]<<" | ";
	cout<<endl<<"Size : "<<n;
}
int con(int a, int b){
	return stoi( to_string(a) + to_string(b) );;
}
int main(){
	cout<<"Enter integers : ";//extra space(s) will consider as 0;
	int i=0,k=1,x,size=0,raw[100]={};
	while(i<=100){
		x=getchar(); 
		if(x==45)	k=-1;
		if(x==10)	{ size++; break; }
		else if( (x>=48 && x<=57) || x==32 || x==45 ){
			if(x>=48 && x<=57){
				if(i==0)
				raw[i]=x-48;
				else
				raw[size]=con(raw[size],x-48)*k;
			}
			else if(x==32){
			size++; 
			k=1;
			} 
		}
		i++;
	}
	print(raw,size);
}