#include<iostream>
using namespace std;
int evalute_min(int*,int);
float evalute_mid(int*,int);
int evalute_max(int*,int);
int evalute_penultimate_min(int*,int);
int evalute_penultimate_max(int*,int);
void print(int*,int);
int main()
{
	int arr[]= {1,2,3,4,5,6,7,8,9,10,50};
	int n=sizeof(arr)/sizeof(arr[0]);
	print(arr,n);
	int min=evalute_min(arr,n);
	int min2=evalute_penultimate_min(arr,n);
	int mid=evalute_mid(arr,n);
	int max=evalute_max(arr,n);
	int max2=evalute_penultimate_max(arr,n);
	cout<<"------------"<<endl
	    <<"Min value : "<<min<<endl
	    <<"Penultimate min : "<<min2<<endl
	    <<"Mid value : "<<mid<<endl
	    <<"Max value : "<<max<<endl
	    <<"Penultimate Max : "<<max2<<endl;
	return 0;
}
void print(int arr[], int n)
{
	cout<<"Array : ";
	for(int i=0 ; i<n ; i++)
		cout<<arr[i]<<"  ";
	cout<<"\nSize : "<<n<<endl;
}
int evalute_min(int arr[], int n)
{
	int k=arr[0];
	for(int i=0 ; i<n ; i++)
	{
		if(k>arr[i])
			k=arr[i];
	}
	return k;
}
int evalute_penultimate_min(int arr[], int n)
{
	int k=arr[0];
	int j=evalute_min(arr,n);
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]<k)
		{
			if(arr[i]!=j)
				k=arr[i];
		}
	}
	return k;
}
int evalute_max(int arr[], int n)
{
	int k=arr[0];
	for(int i=0 ; i<n ; i++)
	{
		if(k<arr[i])
			k=arr[i];
	}
	return k;
}
int evalute_penultimate_max(int arr[], int n)
{
	int k=arr[0];
	int j=evalute_max(arr,n);
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i]>k)
		{
			if(arr[i]!=j)
				k=arr[i];
		}

	}
	return k;
}
float evalute_mid(int arr[], int n)
{
	int avg=0,j=0;
	for(int i=0 ; i<n ; i++)//Average
	{
		avg+=arr[i];
	}
	avg/=n;
	
    float a = avg,b;
    for (int i = 0; i < n; i++)
    {
        b = avg - arr[i];
        if (b<a && b>0)
        {
            j=i;
            a=b;
        }
        
    }
    // int temp[n];
	// for(int i=0 ; i<n ; i++)//storing the number got by subtraction
	// {
	// 	temp[i]=arr[i]-avg;
	// 	if(temp[i]<0)
	// 		temp[i]*=-1;
	// }
	// int k=temp[0];
	// for(int i=1 ; i<n ; i++)
	// {
	// 	if(k>temp[i])
	// 	{
	// 		k=temp[i];
	// 		j=i;
	// 	}
	// }
	return arr[j+1];
}