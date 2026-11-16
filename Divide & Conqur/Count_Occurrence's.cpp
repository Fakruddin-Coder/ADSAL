
#include<iostream>
using namespace std;

int isfirst(int a[],int n,int target)
{
    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==target)
        {
            ans=mid;
            high=mid-1;
        }
        else if(a[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    return ans;
}

int islast(int a[],int n,int target)
{
    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==target)
        {
            ans=mid;
            low=mid+1;
        }
        else if(a[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout<<"Enter Size Of Array : ";
    cin>>n;

    int a[n];

    cout<<"Enter Array Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int target;
    cout<<"Enter Target Element : ";
    cin>>target;

    int first=isfirst(a,n,target);
    int last=islast(a,n,target);

    if(first==-1 || last==-1)
    {
        cout<<"Element Is Not Found...";
    }
    else
    {
        int count=last-first+1;
        cout<<"Element Count Is : "<<count;
    }

    return 0;
}
