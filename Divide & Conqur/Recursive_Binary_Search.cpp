
#include<iostream>
using namespace std;

int search(int a[],int l,int h,int target)
{
    if(l>h)
    {
        return -1;
    }

    int mid=l+(h-l)/2;

    if(a[mid]==target)
    {
        return mid;
    }
    else if(a[mid]<target)
    {
        return search(a,mid+1,h,target);
    }
    else
    {
        return search(a,l,mid-1,target);
    }
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int a[n];

    cout<<"Enter Sorted Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int target;
    cout<<"Enter Target : ";
    cin>>target;

    int idx=search(a,0,n-1,target);

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
