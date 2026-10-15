#include <bits/stdc++.h>

using namespace std;
int a[101][101];
bool visited[101][101];
int m,n;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};

void bfs(int i,int j)
{
	queue<pair<int,int> > q;
	q.push({i,j});
//	visited[i][j]=true;
    a[i][j]=0;
	cout<<i<<" "<<j<<endl;
	while(!q.empty())
	{
		pair<int,int> so=q.front();
		q.pop();
        for(int k=0;k<4;k++)
        {
        	int i1=so.first+dx[k];
        	int j1=so.second+dy[k];
        	if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]==1)
        	{
        		cout<<i1<<" "<<j1<<endl;
            	q.push({i1,j1})	;
            	a[i1][j1]=0;
			}
		}
	}
}
int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)  
     for(int j=1;j<=m;j++)
         cin>>a[i][j];
//   memset(visited,false,sizeof(visited));
   int dem=0;
   for(int i=1;i<=n;i++)
   {
   	  for(int j=1;j<=m;j++)
   	   { 
   		if(a[i][j]==1)
   		{
   			cout<<"Thanh phan lien thong thu "<<dem+1<<" :"<<endl;
   			bfs(i,j);
   			++dem;
		}
       }  
   }
   cout<<dem<<endl;
}
