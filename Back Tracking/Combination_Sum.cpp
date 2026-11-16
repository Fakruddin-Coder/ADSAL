
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& candidates, int target, int index, vector<int>& ans)
{
    if(target==0)
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=index;i<candidates.size();i++)
    {
        if(candidates[i]<=target)
        {
            ans.push_back(candidates[i]);

            solve(candidates,target-candidates[i],i,ans);

            ans.pop_back();
        }
    }
}

int main()
{
    vector<int> candidates={2,3,6,7};
    int target=7;

    vector<int> ans;

    solve(candidates,target,0,ans);

    return 0;
}
