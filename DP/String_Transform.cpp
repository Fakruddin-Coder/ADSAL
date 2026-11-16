 #include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter 1st String : ";
    cin>>s1;
	 
    string s2;
    cout<<"Enter 2nd String : ";
    cin>>s2;
	
    int n=s1.length();
    int m=s2.length();
	
    vector<int> dp(m+1,0);
	
    dp[0]=1;
	
    for(int i=0;i<n;i++)
    {
	for(int j=m;j>=1;j--)
	{
            if(toupper(s1[i])==s2[j-1] && dp[j-1]==1)
	     {
	         dp[j]=1;
	     }
	}
		
		
	if(isupper(s1[i]))
	{
			
	    for(int j=0;j<=m;j++)
	    {
	        if(j==0 || s1[i]!=s2[j-1])
		{
		    dp[j]=0;
		}
	     }
	}
		
    }
 
    
    if(dp[m])
    {
    	cout<<"String Can Transform .....";
    }else{
    	cout<<"String Can't Transform .....";
    }				
			
	return 0;
}	
