#include <iostream>
#include <algorithm>

using namespace std;

// int tknp(int a[],int l,int r,int x)
// {
//    int mid=(l+r)/2;
//    while(a[mid]!=x)
//    {
//      if(a[mid]>x)
//         {
//             r=mid-1;
//             mid=(l+r)/2;
//         }
//       else
//       {
//          l=mid+1;  
//          mid=(l+r)/2;
//       }
//    }
//    return mid;
// }
int tknp(int a[],int l,int r,int x)
{
    int res=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]<x)
        {
            res=mid;
            l=mid+1;
        }
        else
           r=mid-1;
    }
    return res;
}
int main()
{
    int n,l,r;
    cin>>n;
    r=n-1;
    l=0;
    int a[n],b[n];
    for(int i=0;i<n;i++)
     { 
        cin>>a[i];
        b[i]=a[i];
     }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        // int vitri=tknp(a,l,r,b[i])-1;
        // while(a[vitri]==b[i] && vitri!=0)
        //   vitri--;
        // if(a[vitri]==0)
        //     cout<<"#"<<" ";
        // else
        //     cout<<a[vitri]<<" ";
        int res=tknp(a,l,r,b[i]);
        if(res==-1)
          cout<<"#"<<" ";
        else
        {
            cout<<a[res]<<" ";
        }
    }

}