
#include<iostream>
using namespace std;

int count(int a[],int n)
{
    int low=0;
    int high=n;

    while(low<high)
    {
        int mid=low+(high-low)/2;

        if(a[mid]==1)
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
    }

    return low;
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int a[n];

    cout<<"Enter 0 and 1 in Sorted Order : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int l=count(a,n);

    cout<<"No of Zero : "<<n-l<<endl;
    cout<<"No of Ones : "<<l;

    return 0;
}
