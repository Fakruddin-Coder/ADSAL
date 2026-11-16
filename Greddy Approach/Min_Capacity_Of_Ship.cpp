
#include<iostream>
using namespace std;

int capacity(int task[],int n,int D)
{
    int low=0;
    int high=0;

    for(int i=0;i<n;i++)
    {
        if(task[i]>low)
        {
            low=task[i];
        }

        high+=task[i];
    }

    int ans=high;

    while(low<=high)
    {
        int mid=(low+high)/2;
        int day=1;
        int work=0;

        for(int i=0;i<n;i++)
        {
            if(work+task[i]<=mid)
            {
                work+=task[i];
            }
            else
            {
                day++;
                work=task[i];
            }
        }

        if(day<=D)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    return ans;
}

int main()
{
    int D;
    cout<<"Enter No.of Days : ";
    cin>>D;

    int n;
    cout<<"Enter No.of Tasks : ";
    cin>>n;

    int task[n];

    cout<<"Enter Tasks : ";
    for(int i=0;i<n;i++)
    {
        cin>>task[i];
    }

    int ans=capacity(task,n,D);

    cout<<"Minimum Capacity per Day : "<<ans;

    return 0;
}
