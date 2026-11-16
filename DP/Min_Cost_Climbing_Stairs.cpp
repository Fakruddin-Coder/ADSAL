#include <iostream>
#include <vector>
using namespace std;

int steps(int cost[],int n)
{
    vector<int>dp(n);

    dp[0]=cost[0];
    dp[1]=cost[1];

    for(int i=2;i<n;i++)
    {
        dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
    }

    return min(dp[n-1],dp[n-2]);
}
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;

    int cost[n];

    cout<<"Enter Elements : ";

    for(int i=0;i<n;i++)
    {
        cin>>cost[i];
    }

    int ans=steps(cost,n);

    cout<<"Minimum Cost : "<<ans;

}