  #include<iostream>
#include <vector>
using namespace std;

int main()
{
	int S=5;
	
	int ST[5]={1,2,3,4,5};
	int CT[5]={3,4,5,6,7};
	int count=0;
	
	//cout<<"Visited Shops ST & CT P:1"<<"("<<ST[0]<<" , "<<CT[0]<<")"<<endl;
	int k=2;
	
	vector<int> ans(k,0);
	
	for(int i=0;i<5;i++)
	{
		int m=-1;
		int best=-1;
		
	    for(int j=0;j<k;j++)
	    {
	        if(ans[j]<=ST[i] && ans[j]>best)
	        {
	           //cout<<"Visited Shops ST & CT P:"<<j+1<<"("<<ST[i]<<","<<CT[i]<<")"<<endl;
	            
	            best=ans[j];
	          // count++;
	          
	          m=j;
	          
	        }
	    }  
	    
	    if(m!=-1)
	    {
	    	cout<<"Visited Shops ST & CT P:"<<m+1<<"("<<ST[i]<<","<<CT[i]<<")"<<endl;
	    	ans[m]=CT[i];
	    	count++;
	    }else{ 
	 cout<<"No Of Shop Visited : "<<count;
	 }
	} 
	 return 0;
}	 
	  
	        
	
	
