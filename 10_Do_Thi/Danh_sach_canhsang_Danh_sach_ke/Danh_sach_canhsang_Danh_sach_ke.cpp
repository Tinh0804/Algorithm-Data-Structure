#include <bits/stdc++.h>

using namespace std;
//5 9
//1 2
//1 3    1:2 3 4 
//1 4    2:1 3 4 5
//2 3  =>3:1 2 3 5
//2 4    4:1 2 3 5
//2 5    5:2 3 4
//3 4
//3 5
//4 5
int main()
{
   int n,m;
   vector<int> adj[1001];
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
   	  int x,y;
   	  cin>>x>>y;
   	  adj[x].push_back(y);
   	  adj[y].push_back(x);
   }
   for(int i=1;i<=n;i++)
   {
   	  cout<<i<<":";
   	 for(auto &x:adj[i])
   	   	cout<<x<<" ";
	 cout<<endl;
   }
}
