#include <iostream>
#include <string.h>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <algorithm>
using namespace std;

// 5 10
// SV0001 Pham Duc Tuan
// SV0002 Pham Hong Trong Tam
// SV0003 Nguyen Duc Trong Tam
// SV0004 Luong Hong Trong Tam
// SV0005 Pham Manh Hung

// 26/11/2022 19:27:24 sv00005 code.ptit.edu.vn 
// 26/11/2022 19:15:24 sv00005 code.ptit.edu.vn   
// 26/11/2022 19:19:56 sv00001 code.ptit.edu.vn 
// 26/11/2022 19:56:10 sv00005 code.ptit.edu.vn    
// 26/11/2022 19:52:04 sv00005 code.ptit.edu.vn   
// 26/11/2022 19:23:20 sv00003 facebook.com
// 26/11/2022 19:22:24 sv00004 code.ptit.edu.vn    
// 26/11/2022 19:28:10 sv00004 code.ptit.edu.vn  
// 26/11/2022 19:23:16 sv00005 youtube.com
// 26/11/2022 19:22:34 sv00004 youtube.com
map<string,pair<string,bool> > mp;

void solve(int n,int m)
{
   vector<string> v;
   while(n--)
   {
      cin.ignore();
      string st,tmp;
      getline(cin,st);
      stringstream ss(st);
      while(ss >> tmp)
      {
        v.push_back(tmp);
      }
      string msv=v[0];
      string hoten="";
      for(int i=1;i<v.size();i++)
        hoten+=v[i]+" ";
        hoten.pop_back();
        mp[msv].first=hoten;
        mp[msv].second=true;
   }
   set<string> duthi;
   for(int i=0;i<m;i++)
   {
    string x,y,z,t;
    cin>>x>>y>>z>>t;
    if(t!="code.ptit.edu.vn")
       mp[z].second=false;
    if(t=="code.ptit.edu.vn")
       duthi.insert(z);
   }
   for(auto it:mp)
   {
      cout<<it.first<<" "<<it.second.first<<" ";
      if(it.second.second==false || duthi.count(it.first)!=0)
         cout<<"FAIL\n";
      else
         cout<<"OK\n";
   }
}
int main()
{
    int n,m;
    cin>>n>>m;
    solve(n,m);
}
