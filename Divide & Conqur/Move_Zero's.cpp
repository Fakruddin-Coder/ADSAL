#include <iostream>
using namespace std;

int main(){

	int a[7]={0,1,0,5,19,1,0};
	
	int n=7;
	int j=0;
	
	
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			a[j]=a[i];
			j++;
		}
	}
	
	for(int i=j;i<n;i++)
	{
		a[i]=0;
	}	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
}			
			
			
		
