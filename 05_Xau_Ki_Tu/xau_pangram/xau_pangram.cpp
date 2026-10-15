#include <bits/stdc++.h>
//xau pangram la xau co chua tat ca cac ki tu bang chu cai
using namespace std;
int main()
{
   string st;
   getline(cin,st);
   set<char> s;
   for(int i=0;i<st.size();i++)
   {
   	  st[i]=tolower(st[i]);
   	  s.insert(st[i]);
   }
   if(s.size()==26)
       cout<<"YES";
   else
       cout<<"NO";
}

