#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

// 5 5
// 2 4 3 1 3
// 4 3 4 1 3
// 2 3 2 3 3
// 3 1 4 1 4
// 2 1 4 3 2

int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int dem;
bool visited[50][50];
int n,m;
int a[50][50];
void nhap()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
           cin>>a[i][j];
    memset(visited,false,sizeof(visited));
}
void visit(int i,int j,int x)
{
    dem++;
    visited[i][j]=true;
    for(int k=0;k<8;k++)
    {
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]==x)
        {
            visit(i1,j1,x);
        }
    }
}
int main()
{
   nhap();
   map<int,vector<int> > mp;
   for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(!visited[i][j])
            {
                int tmp=a[i][j];
                dem=0;
                visit(i,j,tmp);
                mp[tmp].push_back(dem);
            }
    for(map<int,vector<int> >::iterator it=mp.begin();it!=mp.end();it++)
    {
        sort(it->second.begin(),it->second.end());
  
        cout<<it->first<<" ";
        for(vector<int>::iterator x=it->second.begin();x!=it->second.end();x++)
          cout<<*x<<" ";
        cout<<endl;
    }
  
}