#include <bits/stdc++.h>

using namespace std;
int m,n,st,en;
vector<int> v[101];
int parent[101];
bool visited[101];
//Thuật toán Kiểm tra này nên dùng BFS để dễ hiểu hơn
bool BFS(int u)
{
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty())
	{
		int top=q.front();
		q.pop();
		for(auto x:v[top])
		  if(!visited[x])
		  {
		  	 q.push(x);
		  	 visited[x]=true;
		  	 parent[x]=top;
		  }
		  else if(x!=parent[top])
		  {
		     st=x;en=top;
		     return true;
		  }
	}
	return false;
}
void nhap()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_bøack(y);
		v[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    for(int i=1;i<=n;i++)
      if(BFS(i))
      {
        cout<<"YES!\n";
        return 0;
      }
	cout<<"NO!\n";
	return 0;
}
