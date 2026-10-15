#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,s,l,sum,ans;
   cin>>n>>s;
   int a[n];
   sum=0;
   l=0;
   ans=0;
   for(int i=0;i<n;i++)
      cin>>a[i];
   for(int r=0;r<n;r++)
   {
   	  sum+=a[r];
   	  while(sum>=s)
   	  {
   	  	 ans+=n-r;
   	  	 sum-=a[l];
   	  	 l++;
   	  }  
   }
   cout<<ans<<endl;
}

