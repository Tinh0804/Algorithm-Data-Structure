#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,d,dem;
    
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int j=1;j<n;j++)
    {
      dem=0;
      if(a[j]<=a[j-1])
      {
    	while(a[j]<=a[j-1])
    	{
    	  a[j]+=d;
    	  dem++;
        }
      }
    }
    for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
    cout<<endl<<dem<<endl;
}

