#include<iostream>
using namespace std;

int main()
{
	int coin[5]={20,10,5,2,1};
	
	int num;
	int ans[5]={0};
	
	cout<<"Enter Money :";
	cin>>num;
	
	for(int i=0;i<5;i++)
	{
	    if(num>=coin[i])
	    {
	       ans[i]=num/coin[i];
	       num=num%coin[i];
	    } 
	} 	
	
	for(int i=0;i<5;i++)
	{
	    if(ans[i]>0)
	    {
	    	cout<<coin[i]<<" Coins : "<<ans[i]<<endl;
	    }
	}
	
	return 0;	
}	 	 
	
