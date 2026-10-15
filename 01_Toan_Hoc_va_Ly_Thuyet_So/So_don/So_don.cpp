#include <bits/stdc++.h>

using namespace std;
set<int> s;
int Solan(int a[],int n,int tag)
{
	int dem=0;
	for(int i=0;i<n;i++)
	   if(a[i]==tag)
	     dem++;
	return dem;
}
int Single(int a[],int n)
{
	for(auto &it:s)
	{
		if(Solan(a,n,it)==1)
		    return it;
	}
}
int main()
{
    int n;
    cin>>n;
    int a[n];   
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      s.insert(a[i]);
    }
    cout<<Single(a,n);
}
