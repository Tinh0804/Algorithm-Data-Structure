// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>>

using namespace std;
int m,n;
vector<int> v[101];
bool visited[101];
vector<int> adj;
int in[101];

//int visited[101];
void Kahn()
{
   queue<int> q;
   for(int i=1;i<=n;i++)
   {
   	  if(in[i]==0)
   	     q.push(i);
   }
   while(!q.empty())
   {
   	  int top=q.front();
   	  q.pop();
   	  adj.push_back(top);
   	  for(int k:v[top])
   	  {
   	  	 in[k]--;
   	  	 if(in[k]==0)
   	  	   q.push(k);
		}
   }
   for(auto x:adj)
     cout<<x<<" ";
}
void nhap()
{
	cin>>n>>m;
	memset(in,0,sizeof(in));
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
//		v[y].push_back(x);
        in[y]++;
	}
	memset(visited,false,sizeof(visited));
}
int main()
{
  nhap();
  Kahn();
}
