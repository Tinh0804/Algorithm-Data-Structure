#include <bits/stdc++.h>

using namespace std;
int main()
{
   int m,n,t,s;
   t=s=0;
   vector<int> v;
   int a[m],b[n];
   cin>>m>>n;
   for(int i=0;i<m;i++)
      cin>>a[i];
   for(int j=0;j<n;j++)
      cin>>b[j];
   while(t<m&&s<n)
   {
   	  if(a[t]<=b[s])
   	  {
   	      v.push_back(a[t]);
   	  	  t++;
   	  }
   	  else
   	  {
   	  	  v.push_back(b[s]);
   	  	  s++;
   	  }
   }
   while(t<m)
   {
   	   v.push_back(a[t]);
   	   t++;
   }
   while(s<n)
   {
   	   v.push_back(b[s]);
   	   s++;
   }
   for(vector<int>::iterator k=v.begin();k!=v.end();k++)
      cout<<*k<<",";
    
}



