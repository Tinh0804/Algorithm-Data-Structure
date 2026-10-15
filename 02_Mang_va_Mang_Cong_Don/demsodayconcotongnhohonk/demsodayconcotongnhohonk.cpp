#include <bits/stdc++.h>

using namespace std;
int main()
{
   int m,n,s,r,l,tong;
   cin>>m>>n;
   int a[n];
   l=0;
   tong=0;
   for(int i=0;i<m;i++)
   {
   	  cin>>a[i];
   }
   for(int r=0;r<m;r++)
   {
   	 s=s+a[r];
   	 while(s>n)
   	 {
   	 	 s=s-a[l];
   	 	 l++;
   	 }
   	 tong=tong+r-l+1;
   }
   cout<<tong<<endl;
}

