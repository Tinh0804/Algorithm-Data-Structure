#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <set>

using namespace std;
int m,n,t1,t2,s1,s2;
char a[101][101];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int d[101][101];//Luu so buoc di tu o bat dau toi o i,j
vector<pair<int,int> > adj;
set<pair<int,int> > se;
/*
6 6
A o o x o o
o x o o o o
o x o o o o
o o o o x x
B o o o x o
o o o x x x
*/
void bfs(int i,int j)
{

	queue<pair<int,int> > q;
	q.push(make_pair(i,j));
	a[i][j]='o';
	d[i][j]=0;
	adj.push_back(make_pair(i,j));
	se.insert(make_pair(i,j));
	while(!q.empty())
	{
		pair<int,int> top=q.front();
		q.pop();
		for(int k=0;k<4;k++)
		{
			int i1=top.first+dx[k];
			int j1=top.second+dy[k];
			if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]!='x')
			{
				d[i1][j1]=d[top.first][top.second]+1;
				if(se.find((make_pair(i1,j1))) == se.end())
				{
					se.insert(make_pair(i1,j1));
					adj.push_back(make_pair(i1,j1));
				}
				if(a[i1][j1]=='B')
				   return;
				q.push(make_pair(i1,j1));
				a[i1][j1]='o';
			}
		}
	}
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
      cin>>a[i][j];
      if(a[i][j]=='A'){
      	t1=i;s1=j;
	  }
	  else if(a[i][j]=='B')
	  {
	  	t2=i;s2=j;
	  }
    }
//  memset(d,0,sizeof(d));
  bfs(t1,s1);
  if(!d[t2][s2])
     cout<<"Khong co duong di!\n";
  else
    cout<<d[t2][s2]<<endl;
  
  for(auto x:adj)
  {
  	cout<<x.first<<" "<<x.second<<endl;
  }
}
