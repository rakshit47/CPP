#include<iostream>
using namespace std;
int i,k,j,item=0,n=-1,*arr;
void input()
{
	if(n==-1) 
	cout<<"List isn't created yet";
	else
	{
		i=item;
		while(i<n)
		{
			cout<<"Enter item Number "<<i+1<<" : ";
			cin>>arr[i];
			item++;
			i++;
		}
	}
}

void input(int j)
{
	if(n==-1) 
	cout<<"List isn't created yet";
	else
	{
		i=j;
		while(i<j)
		{
			cout<<"Enter item Number "<<i+1<<" : ";
			cin>>arr[i];
			item++;
			i++;
		}
	}
}

void delitem(int s)
{
	
	if(s>item || s<=0)
	cout<<"Item doesn't exist";
	else
	{
		s--;
		for(i=s;i<item-1;i++)
		{
			arr[i]=arr[i+1];
		}
		item--;
		cout<<"item nubmer "<<s<<" deleted ";
	}
}
void modify(int s)
{
	arr=new int[s];
	n=s;
	item=0;
}
void dellist()
{
	arr=NULL;
	delete [] arr;
	n=-1;
	item=0;
}
int main()
{
     system("CLS");
	arr = new int[0];
	int ch;
	cout<<"1.Input item \n2.Create/Modify List \n3.Increase List\n4.Decrease List \n5.Delete list\n6.Show list \n7.Delete a item from list \n8.Exit \n9.User Element Input";
	x:
	cout<<"\n=====================\nSize of list : "<<(n < 0 ? 0 : n)<<"\nNumber of items : "<<item<<endl<<"---------------------\nEnter your choice : ";
	cin>>ch;

     switch (ch)
     {
     case 1:
          if(n==item) cout<<"List full "; 
          else input(); 
          // free
          goto x;
     
     case 2:
          cout<<"Enter new size : "; 
          cin>>k; 
          modify(k); 
          goto x;

     case 3:
          if(n==-1) cout<<"List isn't created yet"; 
          else 
          {    cout<<"Enter to increase size : "; 
               cin>>k; 
               n+=k; 
          } 
          goto x;

     case 4:
          if(n<=-1) cout<<"List size is 0"; 
          else 
          {    cout<<"Enter to decrease size : "; 
               cin>>k; 
               if (k>n)
               {
                    cout<<endl<<"ERROR NOT ENOUGH SIZE OF LIST "<<k-n<<" MORE THAN THE LIST SIZE"<<endl;
                    n = 0;
                    item = 0;
               }
               else
               {
                    n-=k;
                    item = item - k;
               }
                
          }  
          goto x;

     case 5:
          dellist(); 
          goto x;

     case 6:
          if(item==0) cout<<"List empty"; 
          else 
          { 
               cout<<"List : "; 
               for(i=0 ; i<item ; i++) 
               cout<<arr[i]<<" "; 
          } 
          goto x;

     case 7:
          if(item==0) cout<<"List empty"; 
          else 
          { 
               cout<<"Enter list number to delete : "; 
               cin>>k; 
               delitem(k); 
          } 
          goto x;

     case 8:
          return 0;

     case 9:
          cout<<"Enter How much elemment should be Entered : ";
          cin>>j;
          input(j); 
          goto x;
     default:
          cout<<"Invalid choice "; 
          goto x;
     }
}