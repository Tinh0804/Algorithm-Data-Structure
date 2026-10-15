#include <bits/stdc++.h>

using namespace std;
int main()
{
   //Ma trận kề
        //Đồ thị vô hướng có tính chất đối xứng đừng chéo
   //Danh sách Cạnh
   //Danh sách Kề:vector<int> adj[1001];
   int a[100][100];
   int n,m;
   cin>>n>>m;
   for(int i=0;i<m;i++)
   {
   	  int x,y;
   	  cin>>x>>y;
   	  a[x][y]=a[y][x]=1;
   }
   for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
