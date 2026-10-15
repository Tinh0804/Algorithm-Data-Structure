#include <bits/stdc++.h>

using namespace std;
int m,n,a[100][100],b[100][100];
int count=0;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
//j-1,i-1  i-1,j  i-1,j+1
//j-1,i  i,j  i,j+1
//i+1,j-1 i+1,j  i+1,j+1 
void loang(int i,int j)
{
	a[i][i]=0;
	int dem=0;
	for(int k=0;k<4;k++)
	{
		int i1=i+dx[k];
		int j1=j+dy[k];
		if((i1>=1&&i1<=m)&&(j1>=1&&j1<=n))
		   dem++;
	}
	count+=4-dem;
	for(int k=0;k<4;k++)
	{
		int i1=i+dx[k];
		int j1=j+dy[k];
		if((i1>=1&&i1<=m)&&(j1>=1&&j1<=n))
		   loang(i1,j1);
    }
}
int main()
{
   cin>>m>>n;
   for(int i=1;i<=m;i++)
     for(int j=1;j<=n;j++)
     {
     	cin>>a[i][j];
     	b[i][j]=a[i][j];
     } 
   for(int i=1;i<=m;i++)
   {
   	for(int j=1;j<=n;j++)
   	{
   		if(a[i][j])
   		{
//   			count=0;
   			loang(i,j);
   			cout<<count<<" ";
   		}
    }
   }
}

