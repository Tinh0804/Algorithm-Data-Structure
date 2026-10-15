#include <bits/stdc++.h>

using namespace std;
int a[1000][1000];
int d[1000][1000];//d[i][j];Luu so buoc di toi thieu tu o start den o hien tai
int dx[4]={-1,0,0,1};
int dy[4]={0,-1, 1,0};

pair<int,int> start,end;
int m,n;
int solve()
{
	queue<pair<int,int> > q;
	q.push({start.first,start.second});
	d[start.first][start.second]=0;
	while(!q.empty())
	{
		pair<int,int>top=q.front();
		q.pop();
		//duyet 4 o xung quanh
		int i=top.first;
		int j=top.second;
		for(int k=0;k<4;k++)
		{
			int i1=i+dx[k];
			int j1=j+dy[k];
			if(a[i1][j1]>=0&&i1>=0&&i1<m&&j1>=0&&j1<n)
			{
			   a[i1][j1]=0;
			   q.push({i1,j1});
			   d[i1][j1]=d[i][j]+1;	
			   if(i1==end.first&&j1==end.second)
			      	return d[i][j]+1;
			}
		}
	}
}
int main()
{
   cin>>m>>n;
   cin>>start.first>>start.second>>end.first>>end.second;
   for(int i=0;i<m;i++)
   	  for(int j=0;i<n;j++)
   	       cin>>a[i][j];
   memset(d,0,sizeof(d));
   if(a[start.first][start.second]&&a[end.first][end.second])
   {
   	  cout<<"So buoc ngan nhat:"<<solve()<<endl;
   }
   else
      cout<<"Khong tim thay duong di!"<<endl;
}

