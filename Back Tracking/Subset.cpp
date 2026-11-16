
#include <iostream>
#include <vector>
using namespace std;

void sub(vector<int> &nums, vector<int> &current, int idx)
{
   
     	cout << "[ ";

        for (int x : current)
        {
            cout << x << " ";
        }

        cout << "]" << endl;

     
	for(int i=idx;i<nums.size();i++)
	{
    
   	 current.push_back(nums[i]);

    	sub(nums, current, i + 1);

   	 current.pop_back();

   	}
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<int> current;

    sub(nums, current, 0);

    return 0;
}
