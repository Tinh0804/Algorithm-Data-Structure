#include <bits/stdc++.h>

using namespace std;
//5 9
//1 2
//1 3    
//1 4     0 1 1 1 0
//2 3     1 0 1 1 1
//2 4   =>1 1 0 1 1
//2 5     1 1 1 0 1
//3 4     0 1 1 1 0
//3 5
//4 5
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
