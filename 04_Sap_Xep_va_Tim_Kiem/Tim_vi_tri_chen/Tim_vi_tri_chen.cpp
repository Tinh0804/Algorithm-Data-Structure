#include <bits/stdc++.h>

using namespace std;
int vitri(int a[],int n,int target)
{
	if(a[n-1]<target)
	  return n;
	else
       for(int i=0;i<n;i++)
          if(a[i]>=target&&a[i-1]<target)
               return i;
}
int main()
{
   int n,target;
   cin>>n;
   cin>>target;
   int a[n];
   for(int i=0;i<n;i++)
     cin>>a[i];
   cout<<vitri(a,n,target)<<endl;
           
}

