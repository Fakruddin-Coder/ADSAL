#include <iostream>
#include <vector>
using namespace std;

int steps(int nums[],int n)
{
    vector<int>dp(n);

    if(n==1)
    {
        return nums[0];
    }
    dp[0]=nums[0];
    dp[1]=max(nums[1],nums[0]);

    for(int i=2;i<n;i++)
    {
        dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
    }

    return dp[n-1];
}
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;

    int nums[n];

    cout<<"Enter Elements : ";

    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    int ans=steps(nums,n);

    cout<<"Minimum Cost : "<<ans;

    return 0;

}
