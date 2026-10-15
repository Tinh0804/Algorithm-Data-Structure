#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   int a[n];
   for (int t=0;t<n;t++)
      cin>>a[t];
   for (int i=0;i<=n-k;i++)
   {
   	    int tmp=INT_MIN;
   	    for(int j=0;j<k;j++)
   	    {
   	       tmp=max(tmp,a[i+j]);	
	    }
	cout<<tmp<<" ";
    }
}

