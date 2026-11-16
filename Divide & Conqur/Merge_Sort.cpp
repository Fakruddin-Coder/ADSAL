
#include<iostream>
using namespace std;

void merge(int a[],int l,int mid,int h)
{
    int i=l;
    int j=mid+1;
    int k=0;
    int temp[100];

    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }

    while(i<=mid)
    {
        temp[k++]=a[i++];
    }

    while(j<=h)
    {
        temp[k++]=a[j++];
    }

    for(int i=l;i<=h;i++)
    {
        a[i]=temp[i-l];
    }
}

void mergesort(int a[],int l,int h)
{
    if(l<h)
    {
        int mid=l+(h-l)/2;

        mergesort(a,l,mid);
        mergesort(a,mid+1,h);

        merge(a,l,mid,h);
    }
}

int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    int a[n];

    cout<<"Enter Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    mergesort(a,0,n-1);

    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
