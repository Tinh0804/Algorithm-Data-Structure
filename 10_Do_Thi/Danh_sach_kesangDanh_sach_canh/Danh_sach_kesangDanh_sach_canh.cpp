#include <bits/stdc++.h>

using namespace std;
//5         1 2
//2 3 4     1 3
//1 3 4 5   1 4
//1 2 4 5 =>2 3 
//1 2 3 5   2 4
//2 3 4     2 5
//          3 4
//          3 5
//          4 5
int main()
{
   int n;
   cin>>n;
   int a[101][101];
   vector<pair<int,int> > v;
   cin.ignore();
   for(int i=1;i<=n;i++)
   {
   	  string s,num;
   	  getline(cin,s);
   	  stringstream ss(s);
   	  while(ss>>num)
   	  {
   	  	  if(stoi(num)>i)
   	  	     v.push_back({i,stoi(num)});
	  }
   }
   cout<<endl;
   for(auto it:v)
     cout<<it.first<<" "<<it.second<<endl;
}
