#include <bits/stdc++.h>

using namespace std;
int m,n;
vector<int> v[101];
int visited[101];
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty())
	{
		int giatri=q.front();
		cout<<giatri<<" ";
		q.pop();
		for(auto x:v[giatri])
		  if(!visited[x])
		  {
		      q.push(x);
		      visited[x]=true;
		  }
	}
}
void connected()
{
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		{
			ans++;
			cout<<"Cac dinh thuoc thanh phan lien thong thu "<<ans<<" :"<<endl;
			bfs(i);
			cout<<endl;
		}
	}
	cout<<"So lien thong cua do thi:"<<ans<<endl;
}
int main()
{
  cin>>n>>m;
  for(int i=0;i<m;i++)
  {
  	 int x,y;
  	 cin>>x>>y;
  	 v[x].push_back(y);
  	 v[y].push_back(x);
  }
  memset(visited,false,sizeof(visited)) ;
  connected();
}
