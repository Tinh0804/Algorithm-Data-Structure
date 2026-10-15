#include <bits/stdc++.h>

using namespace std;
bool visited[101];
int parent[101];
vector<int> v[101];
int m,n,t,s;

void dfs(int u)
{
	visited[u]=true;
	for(auto x:v[u])
	  if(!visited[x])
	  {
	  	//Ghi nhan cha cua x la u
	  	  parent[x]=u;
	  	  dfs(x);
	  }
}
void kt(int t,int s)
{
   memset(visited,false,sizeof(visited));
   memset(parent,0,sizeof(parent));
   dfs(t);
   if(!visited[s])
      cout<<"Khong co duong di";
   else
   {
   	  cout<<"Co duong di!\n";
   	  //Truy vet duong di
   	  vector<int> vt;
   	  //Bat dau tu dinh begin
   	  while(t!=s)
   	  {
   	  	  vt.push_back(s);
   	  	  s=parent[s];
	  }
	  vt.push_back(t);
	  reverse(vt.begin(),vt.end());
	  for(auto x:vt)
	    cout<<x<<" ";
   }
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
   cout<<"\nNhap dinh dau va cuoi:";
   cin>>t>>s;
   kt(t,s);
}
