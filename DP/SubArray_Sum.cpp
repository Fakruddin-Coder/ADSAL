#include <iostream>
#include <vector>
using namespace std;

bool Prefix(int nums[],int target,int n)
{
	vector<int> dp(n,0);
	dp[0]=nums[0];
	
	for(int i=1;i<n;i++)
	{
	    dp[i]=dp[i-1]+nums[i];
	}
	
	
	for(int i=0;i<n;i++)
	{
	    if(dp[i]==target)
	    {
	        return true; 
	    }
	    
	    for(int j=0;j<n;j++)
	    {
	    	if(dp[i]-dp[j]==target)
	    	{
	    	    return true;
	    	}
	    }
	 }
	 
	 return false;
}  	  
	
int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    
    int nums[n];
    cout<<"Enter Elements : \n";
    
    for(int i=0;i<n;i++)
    {
    	cin>>nums[i];
    }
    
    int target;
    cout<<"Enter Target Elemet : ";
    cin>>target;
    
    if(Prefix(nums,target,n))
    {
    	cout<<"Sub-array Present....";
    }else{
    	cout<<"Sub-array Not Present....";
    }
    
    return 0;
} 	
    			
