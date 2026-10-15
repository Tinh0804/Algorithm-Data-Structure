#include <bits/stdc++.h>
//cong them k don vi tu vi tri left->right roi in ra mang vua bien doi
using namespace std;
int main()
{
   int n;
   cout<<"Nhap so ptu:";
   cin>>n;
   int a[n],b[n];
   int l,r,k;
   cout<<"Nhap chi so l,r,k:";
   cin>>l>>r>>k;
   for(int i=1;i<=n;i++)
   {
   	  cin>>a[i];
   	  if(i==1)
   	     b[i]=a[i];
   	  else
   	     b[i]=a[i]-a[i-1];
   }
   b[l]+=k;
   b[r+1]-=k;
   cout<<"Mang sau khi bien doi:\n";
   for(int i=1;i<=n;i++)
   {
   	 if(i==1)
   	    cout<<b[i]<<" ";
   	 else
   	 {
   	  b[i]=b[i]+b[i-1];
   	  cout<<b[i]<<" ";
     }
   }
   
}

