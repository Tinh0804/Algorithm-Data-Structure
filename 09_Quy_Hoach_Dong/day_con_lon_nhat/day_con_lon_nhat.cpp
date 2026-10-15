#include <bits/stdc++.h>

using namespace std;
int max(int a[],int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	  if(a[i]>max)
	    max=a[i];
	return max;
}
int main()
{
   int t;
   cin>>t;
   while(t>0)
   {
   	  int m,n;
   	  cin>>m>>n;
   	  int a[m];
   	  for(int i=0;i<m;i++)
   	    cin>>a[i];
   	  vector<int> v[10];
   	  int max,j;
   	  j=0;
   	  while(j<m-n+1)
   	  {
   	  	 max=0;
   	     for(int i=j;i<j+n;i++)
   	     {
   	     	v[j].push_back(a[i]);
		 }
		 for(auto it:v[j])
		 {
		 	if(max<it)
		 	  max=it;
		 }
		 cout<<max<<" ";
   	     j++;
	  }
      t--;
      cout<<endl;
   }
}
