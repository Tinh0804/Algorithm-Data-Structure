#include <bits/stdc++.h>

using namespace std;
vector<int> v[101];
vector<int> v1[101];
bool visited[101];
int m,n;
stack<int> s;

void dfs(int u)
{
	visited[u]=true;
	cout<<u<<" ";
	for(auto x:v1[u])
	  if(!visited[x])
	  {
	  	  dfs(x);
	  }
}
void topo(int u)
{
	visited[u]=true;
	for(auto x:v[u])
	  if(!visited[x])
	  {
	  	  topo(x);
	  }
//	cout<<u<<" ";
	s.push(u);
}
void kosaraju()
{
	memset(visited,false,sizeof(visited));
	int count=0;
	for(int i=1;i<=n;i++)
	  if(!visited[i])
	       topo(i);
	cout<<endl;
	memset(visited,false,sizeof(visited));
	vector<int> a;
	while(!s.empty())
	{
		int first=s.top();
		s.pop();	
		if(!visited[first])
		{
				count++;
				a.push_back(first);
				cout<<"Cac dinh thuoc thanh phan lien thong thu "<<count<<" :"<<endl;
				dfs(first);
				cout<<endl;
		}	
	}
	cout<<count<<endl;
	if(count>=1)
	  cout<<"Lien Thong Manh!";
	else
	  cout<<"Khong Lien Thong Manh!";
	cout<<a[1]<<" "<<a[0]<<endl;
}
void nhap()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v1[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}
int main()
{
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif
  nhap();
  kosaraju();
    
}
