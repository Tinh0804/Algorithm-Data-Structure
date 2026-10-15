#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b)
{
    return a.first<b.first;
}

int main()
{
   int n,s;
   cin>>n>>s;
   bool kt;
   vector<pair<int,int> > v;
   while(n--)
   {
     int x,y;
     cin>>x>>y;
     v.push_back(make_pair(x,y));
   }
   sort(v.begin(),v.end(),cmp);
   for(auto it:v)
   {
      if(s>=it.first)
      {
           kt=true;
           s+=it.second;
      }
      else
      {
         kt=false;
         break;
      }
   }
   if(kt)
    cout<<"Yes\n";
   else
    cout<<"No\n";
}