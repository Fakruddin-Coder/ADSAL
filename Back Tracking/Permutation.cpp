#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

	vector<vector <int>> ans;
	
	
void permutation(vector<int> &nums,int start)
{
	if(start == nums.size() )
	{
		ans.push_back(nums);	
		return;	
	}
	
	for(int i=start ;i<nums.size();i++)
	{
		swap(nums[start],nums[i]);
		permutation(nums,start+1);
		swap(nums[start],nums[i]);
	}
		
		
}	
int main()
{
	vector<int> nums={1,2,3,4};
	
	permutation(nums,0);
	
	for(vector<int> v:ans)
	{
		for(int x:v)
		{
		
		   cout<<x<<" ";
		}  
		
		cout<<endl; 
	}
	
	return 0;
}	
