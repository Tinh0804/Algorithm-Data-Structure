#include <bits/stdc++.h>

using namespace std;
int m,n;
vector<int> v[101];
int visited[101];
void dfs(int u)
{
  visited[u]=true;
  cout<<u<<" ";
  for(auto x:v[u])
  {
  	if(!visited[x])
  	{
  	   dfs(x);
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
			dfs(i);
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
