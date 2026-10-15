#include <bits/stdc++.h>

using namespace std;
bool tknp(int a[],int n,int target)
{
	int l=0;
	int r=n-1;
	while(l<=r)
	{
	    int mid=(l+r)/2;
	    if(a[mid]==target)
	       return true;
	    else if (a[mid]<target)
	       l=mid+1;
	    else 
	       r=mid-1;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<=n;i++)
      if(tknp(a,n,i)==false)
      {
         cout<<i;
         break;
      }
}

