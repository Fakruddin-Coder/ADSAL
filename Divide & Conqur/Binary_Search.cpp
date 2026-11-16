
#include<iostream>
using namespace std;

int BS(int a[],int n,int target)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==target)
        {
            return mid;
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

    return -1;
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int a[n];

    cout<<"Enter Elements in Sorted Order : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int target;
    cout<<"Enter Target : ";
    cin>>target;

    int idx=BS(a,n,target);

    if(idx==-1)
    {
        cout<<"Element Is Not Found";
    }
    else
    {
        cout<<"Element Found At Index : "<<idx;
    }

    return 0;
}
