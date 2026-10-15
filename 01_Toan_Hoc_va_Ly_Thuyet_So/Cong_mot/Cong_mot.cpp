#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
   int n,m,tam;
   cin>>n;
   int a[n];
   string s,s1;
   s="";
   m=0;
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
     s+=to_string(a[i]);
   }
   for(int i=0;i<s.size();i++)
   {
   	  m=m*10+(s[i]-'0');
   }
   m=m+1;
   s1=to_string(m);
   for(int i=0;i<s1.size();i++)
      cout<<s1[i]<<",";
}

