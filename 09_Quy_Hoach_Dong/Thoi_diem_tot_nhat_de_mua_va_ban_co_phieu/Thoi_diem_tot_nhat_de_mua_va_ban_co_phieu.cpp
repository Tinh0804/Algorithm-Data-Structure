#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,max;
   cin>>n;
   int a[n];
   max=0;
   for(int i=0;i<n;i++)
     cin>>a[i];
   int j=0;
   while(j<n-1)
   {
   	  for(int i=j+1;i<n;i++)
   	  {
   	  	  if(a[i]>a[j]&&(a[i]-a[j])>=max)
   	  	      max=a[i]-a[j];
	  }
	  j++;
   }
   cout<<max<<endl;
}
