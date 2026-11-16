#include <iostream>
#include <vector>
using namespace std;


float Maxval(int wt[],int val[],int cap,int m)
{
	vector<float> ratio(m,0);
	vector<bool>task(m,true);
	
	for(int i=0;i<m;i++)
	{
		ratio[i]=(float)val[i]/wt[i];
	}
	
	int capacity=0;
	float mxval=0;
	
	while(capacity<=cap)
	{
		float mx=-1;
		int j=-1;
		
		for(int i=0;i<m;i++)
		{
			if(ratio[i]>mx && task[i]==true)
			{
				mx=ratio[i];
				j=i;
			}
		}
		
		
		if(j==-1)
		{
			break;
		}
		
		task[j]=false;
			
		
		if(capacity+wt[j]<=cap)
		{
			capacity+=wt[j];
			mxval+=val[j];
		}else{
			
			float remain=cap-capacity;
			mxval+=(float)remain*ratio[j];
			capacity=cap;
		}
	}		
	
	return mxval;
}	
							
int main(){

	int n;
	cout<<"Enter Size Of Weight :";
	cin>>n;
	
	int wt[n];
	cout<<"Enter Weight's: \n";
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}	
	
	
	int m;
	cout<<"Enter Size Of Value: ";
	cin>>m;
	
	int val[m];
	cout<<"Enter Value's: \n";
	for(int i=0;i<m;i++)
	{
		cin>>val[i];
	}
	
	int capacity;
	cout<<"Enter Capacity :";
	cin>>capacity;
	
	float ans=Maxval(wt,val,capacity,m);
	
	cout<<"Max Value :"<<ans;
	
}	

