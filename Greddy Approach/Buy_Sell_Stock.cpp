#include <iostream>
using namespace std;

int Profit(int a[],int n)
{
	int minP=a[0];
	int maxP=0;
	
	for(int i=1;i<n;i++)
	{
		if(minP>a[i])
		{
			minP=a[i];
		}
		
		maxP=max(maxP,a[i]-minP);
		
	}
	
	return maxP;
}	


int main()
{
	int n=5;
	int a[5]={7,8,3,1,2};
	
	int P=Profit(a,n);
	
	cout<<"Maximum Profit :"<<P;
	
	return 0;
}			
