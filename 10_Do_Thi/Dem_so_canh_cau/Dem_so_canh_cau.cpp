#include <bits/stdc++.h>

using namespace std;
int m,n;
vector<int> v[101];
bool visited[101];
vector<pair<int,int>> dscanh;
void nhap()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
		dscanh.push_back({x,y});
	}
	memset(visited,false,sizeof(visited));
}
void dfs(int u)
{
	visited[u]=true;
	for(auto x:v[u])
	  if(!visited[x])
	     dfs(x);
}
void dfs2(int u,int st,int en)
{
	visited[u]=true;
	for(auto x:v[u])
	  if((u==st&&x==en)||(u==en&&x==st))
	     continue;
	  else if(!visited[x])
	    dfs2(x,st,en);
}
void canhcau()
{
	int count=0;
	int lienthong=0;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++)
	  if(!visited[i])
	  {
	  	 lienthong++;
	  	 dfs(i);
	  }
	for(auto it:dscanh)
	{
		int x=it.first;
		int y=it.second;
		//loai bo canh x,y khoi do thi
		memset(visited,false,sizeof(visited));
		int dem=0;
		for(int j=1;j<=n;j++)
		  if(!visited[j])
		  {
		  	dem++;
		  	dfs2(j,x,y);
		  }
		if(dem>lienthong)
		{
          cout<<x<<" "<<y<<endl;
		  count++;
	    }
	}
	cout<<"\nSo canh cau:"<<count<<endl;
}
int main()
{
  nhap();
  canhcau();
}
 