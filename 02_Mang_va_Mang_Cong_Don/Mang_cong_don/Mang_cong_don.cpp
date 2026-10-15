#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,l,r,tong;
    cout<<"Nhap so luong:";
    cin>>n;
    cout<<"Nhap chi so left,right:";
    cin>>l>>r;
    l--;
    r--;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    for(int i=0;i<n;i++)
       if(i==0)
       {
       	  b[i]=a[i];
       }
       else
       {
       	  b[i]=b[i-1]+a[i];
       }
    tong=b[r-l];
    cout<<"Tong cac ptu tu left-right="<<tong;
}

