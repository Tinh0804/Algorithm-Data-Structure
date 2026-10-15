#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
	int kc1=a.first*a.first+a.second*a.second;
	int kc2=b.first*b.first+b.second*b.second;
	if (kc1!=kc2)
	   return kc1<kc2;
	else
	   {
	   	if (a.first!=b.first)
	   	     return a.first<b.first;
	   	else
	   	     if (a.second!=b.second)
	   	        return a.second<b.second;
	   }
}
int main()
{
  int n;
  cout<<"Nhap so cap toa do:";
  cin>>n;
  pair<int,int> p[n];
  
  for (int i=0;i<n;i++)
     cin>>p[i].first>>p[i].second;
  cout<<endl;
  sort(p,p+n,cmp);
  for (int i=0;i<n;i++)
      cout<<p[i].first<<" "<<p[i].second<<endl;;
}

