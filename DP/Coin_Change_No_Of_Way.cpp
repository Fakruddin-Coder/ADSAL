#include<iostream>
#include<vector>
using namespace std;

int NOW(int Amt)
{
	vector<int>dp(Amt+1,0);
	
	dp[0]=1;
	
	vector<int>coin={1,2,5,10,20};
	
	for(int i=0;i<coin.size();i++)
	{
	    for(int j=coin[i];j<=Amt;j++)
	    {
	        dp[j]+=dp[j-coin[i]];
	      
	    }
	}  
	
	return dp[Amt];
}
int main()
{
	int Amt;
	cout<<"Enter Amount : ";
	cin>>Amt;
	
	
	cout<<"No of ways : "<<NOW(Amt);
	
	return 0;
	
}	

