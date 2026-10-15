 #include <bits/stdc++.h>

using namespace std;
int m,n;
vector<int>v[101];
bool visited[101];
void inp()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));//cho mang visited thanh false
}
void DFS(int u)
{
	cout<<u<<" ";
	//Danh dau u da duoc tham
	visited[u]=true;
	for(auto it:v[u])
	//neu dinh it chua duoc tham
	   if(!visited[it])
	      DFS(it);
}
int main()
{
   inp();
   DFS(8);//Dinh dau tien duyet vao
}
