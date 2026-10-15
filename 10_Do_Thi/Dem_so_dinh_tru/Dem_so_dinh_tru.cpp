#include <bits/stdc++.h>

using namespace std;
int m,n;
bool visited[101];
vector<int> v[101];

void nhap()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
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
void dinhtru()
{
	int count=0;
	int lienthong=0;
//	memset(visited,false,sizeof(visited));
	for(int j=1;j<=n;j++)
	  if(!visited[j])
	    {
	    	lienthong++;
	    	dfs(j);
		}
	for(int i=1;i<=n;i++)
	{
		//loai bo dinh i khoi do thi
		memset(visited,false,sizeof(visited));
		visited[i]=true;
		int dem=0;//dem stplt sau khi loai bo dinh i
		for(int j=1;j<=n;j++)
		{
			if(!visited[j])
			{
				dem++;
				dfs(j);
			}
		}
		if(dem>lienthong)
		{
           cout<<i<<" ";
		   count++;
	    }
	}
	cout<<"\nSo dinh tru:"<<count<<endl;
}
int main()
{
  nhap();
  dinhtru();
}
