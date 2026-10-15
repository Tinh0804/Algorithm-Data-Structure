#include <iostream>
#include <algorithm>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int l,r,mid;
    l=0;
    r=n-1;
    mid=(l+r)/2;
    while(l<=r)
    {
        if(a[mid]>x)
            r=mid-1;
        else if(a[mid]<x)
           l=mid+1;
        else
           break;
        mid=(l+r)/2;
    }
    while(a[mid]==x)
        mid--;
    return mid+1;
}
// 7 8
//2 3 4 4 5 5 6

int main()
{
    int n,k,t,dem;
    cin>>n>>k;
    int a[n];
    dem=0;
    for(int i=0;i<n;i++)
       cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        t=binary_search(a,n,k-a[i]);
        for(int j=t;j<n;j++)
           if(a[i]+a[j]>k && j>i)
            {
                dem++;
                cout<<a[i]<<" "<<a[j]<<";";
            }
    }
    cout<<endl<<dem<<endl;

}