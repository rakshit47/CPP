#include <iostream>
using namespace std;

int Binary_search(int array[],int data,int n)
{
  int low=0;
  int up=n-1;
  while(low < up)
  {
  int mid = (low + up)/2;
  if (data == array[mid])
  return mid;
  else if(data < array[mid])
  up = mid - 1;
  else 
  low = mid + 1;
  }
}

int main(){
   int array[]={1,2,4,6,8,9,10,12,15,16,21,23,25,29,30};
   int i,n = 15;
   int data;
   for(i=0; i<n; i++)
   cout<<" "<<array[i];
   cout<<"\nEnter data to search: ";
   cin>>data;
   int index=Binary_search(array,data,n);
   cout<<" "<<data<<" found at index :"<<index;
  return 0;
}