#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int m,n;
vector<int> v[101];
bool visited[101];
/*
10 11
1 2
1 3
1 5
1 10
2 4
3 6
3 7
3 9
6 7
5 8
8 9
//1 2 3 5 10 4 6 7 9 8
*/
void BFS(int u)
{
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty())
	{
		int giatri=q.front();
		q.pop();
		cout<<giatri<<" ";
		for(int x=1;x<=v[giatri].size();x++)
		  if(!visited[x])
		  {
		      q.push(x);
		      visited[x]=true;
		  }
	}
}
int main()
{
	cout<<"mời nhập n,m";
   cin>>n>>m;
   for(int i=0;i<m;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	v[x].push_back(y);
   	v[y].push_back(x);
	   }   
   memset(visited,false,sizeof(visited));
   BFS(1);
}
