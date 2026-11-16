#include <iostream>
using namespace std;


void merge(int a[],int l,int mid, int h)
{
	int i=l;
	int k=0;
	int temp[50];
	
	for(int i=l;i<=mid;i++)
	{
	    if(a[i]!=0)
   		{
		   temp[k++]=a[i];
		}
	}
	
	
	for(int i=mid+1;i<=h;i++)
	{
	    if(a[i]!=0)
		{
		    temp[k++]=a[i];
		}
	}
	
	
	for(int i=l;i<=mid;i++)
	{
	    if(a[i]==0)
   		{
		   temp[k++]=0;
		}
	}
	
	
	for(int i=mid+1;i<=h;i++)
	{
	    if(a[i]==0)
		{
		    temp[k++]=0;
		}
	}
	
	for(int i=l,j=0;i<=h;i++,j++)
	{
	    a[i]=temp[j];
	}    
	
		
}			
		
void mergesort(int a[],int l,int h)
{
	if(l<h)
	{
		int mid=l+(h-l)/2;
		
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		
		merge(a,l,mid,h);
	}
}


int main()
{
	int n;
	
	cout<<"Enter The Size Of Array: ";
	cin>>n;
	
	int a[n];
	
	cout<<"\nEnter The Element :";
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
		
	mergesort(a,0,n-1);
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}

		


		
