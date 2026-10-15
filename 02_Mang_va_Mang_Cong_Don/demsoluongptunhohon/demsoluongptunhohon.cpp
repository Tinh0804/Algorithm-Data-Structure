#include <bits/stdc++.h>

using namespace std;
int main()
{
   int m,n,d;
   cin>>m>>n;
   int a[m];
   int b[n];
   for(int i=0;i<m;i++)
        cin>>a[i];
   for(int i=0;i<n;i++)
        cin>>b[i];
   for(int i=0;i<n;i++)
   {
   	  d=0;
   	  for(int j=0;j<m;j++)
   	  {
   	  	   if(b[i]>a[j])
   	  	      d++;
   	  	   else
   	  	      break;
   	  }
   	  cout<<d<<" ";
   }
   
}

