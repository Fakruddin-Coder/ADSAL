#include <iostream>
using namespace std;

int SE(int a[],int n)
{	
	int ans=0;
	
	for(int i=0;i<n;i++)
	{
	    ans=ans^a[i];
	   
	}
	
	return ans;
}	 
int main()
{
	int a[5]={4,4,2,1,2};
	int n=5;
	
	int num=SE(a,n);
	
	cout<<"Single Elemet IS : "<<num;
}	
