#include <bits/stdc++.h>

using namespace std;
int dem(int a[],int target)
{
	int d=0;
	for(int i=0;i<7;i++)
	  if(a[i]==target)
	    d++;
	return d;
}
int main()
{
	
   int a[3]={3,2,3};
   vector<pair<int,int> >v;
    set<int> s;
   for(auto j:a)
   {
   	  s.insert(j);
   }
  
   for(set<int>::iterator i=s.begin();i!=s.end();i++)
   {
   	   v.push_back({*i,dem(a,*i)});
   }
//   s=[{2,4},{1,2}];
   for(auto it:v)
    {
    	if(it.second>3/2)
    	   cout<<it.first;
	}
	
}
