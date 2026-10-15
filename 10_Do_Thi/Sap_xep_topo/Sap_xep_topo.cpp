#include <bits/stdc++.h>

using namespace std;
bool visited[101];
vector<int> v[101];
vector<int> adj;
int m,n;
/*
7 7
1 2
2 3
2 4
3 5
4 5
1 6
7 6*/
void dfs(int u)
{
	//bat dau tham
	visited[u]=true;
	for(auto x:v[u])
	  if(!visited[x])
	  {
	  	  dfs(x);
	  }
	//tham xong
	adj.push_back(u);
}
void nhap()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
//		v[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
	for(int j=1;j<=n;j++)
	{
		if(!visited[j])
		   dfs(j);
	}
}
int main()
{
   nhap();
   reverse(adj.begin(),adj.end());
   for(auto it:adj)
     cout<<it<<" ";
}
