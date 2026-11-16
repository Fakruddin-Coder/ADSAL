#include <iostream>
using namespace std;

int zero(int x)
{
	int count=0;
	
	for(int i=5;i<=x;i*=5)
	{
		count+= x / i;
	}
	
	return count;
}

int main()
{
	
	int n;
	
	cout<<"Enter The Number : ";
	cin>>n;
	
	
	int low=0;
	int high=5*n;
	
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(zero(mid)>=n)
		{
			high=mid-1;
			
		}else{	

			low=mid+1;
		
		}
	}	
		
	long long fact=1;
	
	for(int i=1;i<=low;i++)
	{
		fact*=i;
	}	
	
	if(zero(low)==n)
	{
		cout<<low<<" Fact Contains The "<<n<<" Zero At Last..."<<endl;
		cout<<"Number is : "<<fact;
	}else{
		cout<<"Number Not Exist...";
	}
	
}		
			
		
	
