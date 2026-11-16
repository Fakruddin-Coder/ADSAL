#include <iostream>
using namespace std;

int RBS(int a[],int n,int target)
{
	int low=0;
	int high=n-1;
	
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(a[mid]==target)
		{
			return mid;
			
		}else if(a[low]<=a[mid])
		{
			if(a[low]<=target && target< a[mid])
			{
				high=mid-1;
			}else{
				low=mid+1;
			}
		}else{
			if(a[mid]< target && target<= a[high])
			{
				low=mid+1;
			}else{
				high=mid-1;
			}
		}
	}
	
	return -1;
}									



int main()
{
	int n;
	cout<<"Enter Size Of Array :";
	cin>>n;
	
	int a[n];
	cout<<"Enter Array Elements :";
	
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter Elemet "<<i+1<<" : ";
		cin>>a[i]; 
	}
	
	int target;
	cout<<"Enter Target Elemet :";
	cin>>target;
	
	int ans=RBS(a,n,target);
	
	if(ans!=-1)
	{
		cout<<"Elemet Found At : "<<ans;
	}else{
		cout<<"Elemet IS Not Found...";
	}
}				
