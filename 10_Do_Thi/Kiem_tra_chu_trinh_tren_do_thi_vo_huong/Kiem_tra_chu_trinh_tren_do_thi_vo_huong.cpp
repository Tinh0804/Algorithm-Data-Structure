#include <bits/stdc++.h>

using namespace std;
int m,n,st,en;
vector<int> v[101];
bool visited[101];
int parent[101];
/*
7 6
1 2
2 3
2 4
3 6
6 7
7 3*/
void nhap()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}
bool DFS(int u)
{
	visited[u]=true;
	for(auto x:v[u])
	{
		if(!visited[x])
		{
		    parent[x]=u;
			if(DFS(x))
		     	return true;
		}
		else if(x!=parent[u])
		{//kiem tra canh nguoc
		   st=x;en=u;
		   return true;
		}
	}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	nhap();
	#endif
    for(int i=1;i<=n;i++)
    	if(!visited[i])
    	{
    		if(DFS(i))
    		{
    			cout<<"YES!\n";
    			vector<int> cycle;
    			cycle.push_back(st);
    			while(en!=st)
    			{
    				cycle.push_back(en);
    				en=parent[en];
				}
				cycle.push_back(st);
				reverse(cycle.begin(),cycle.end());
				for(auto k:cycle)
				  cout<<k<<" ";
				return 0;
			}
		}
	cout<<"NO!\n";
    return 0;
}
