#include <bits/stdc++.h>

using namespace std;
bool visited[101];
int parent[101];
vector<int> v[101];
vector<int> vc;
int m,n,t,s;

void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty())
	{
		int gt=q.front();
		q.pop();
		for(auto x:v[gt])
		   if(!visited[x])
		   {
		   	  q.push(x);
		   	  visited[x]=true;
		   	  parent[x]=gt;
		   }
	}
}
void kt(int t,int s)
{
	memset(visited,false,sizeof(visited));
	memset(parent,0,sizeof(parent));
	bfs(t);
	if(!visited[s])
	  cout<<"Khong co duong di!";
	else
	{
		cout<<"Co duong di!\n";
		while(t!=s)
		{
			vc.push_back(s);
			s=parent[s];
		}
	}
	vc.push_back(t);
	reverse(vc.begin(),vc.end());
	for(auto x:vc)
	  cout<<x<<" ";
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
   cout<<"Nhap dinh dau va cuoi:";
   cin>>t>>s;
   kt(t,s);
}
