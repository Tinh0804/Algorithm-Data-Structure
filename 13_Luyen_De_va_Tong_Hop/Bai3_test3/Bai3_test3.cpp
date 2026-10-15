#include <iostream>

using namespace std;

// 8 8
// 4 6 1 8 4 9 8 2
// 6 0 8 5 7 8 9 6
// 1 5 7 1 5 2 6 0
// 6 2 2 0 4 9 8 0
// 0 0 6 9 4 6 4 6
// 1 1 1 6 2 9 3 7
// 1 0 7 8 4 5 7 6
// 1 1 5 4 7 2 4 3
// 5
// 2 6 3 7
// 2 5 1 8
// 2 6 2 8
// 2 4 1 8
// 2 3 2 7
long a[101][101],F1[101][101],F2[101][101];
int main()
{
    int m,n,q;
    cin>>n>>m;

    // memset(F1,0,sizeof(F1));
    // memset(F2,0,sizeof(F2));
    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++)
      {
         cin>>a[i][j];
         F1[i][j]=F1[i][j-1]+a[i][j];
         F2[i][j]=F2[i-1][j]+a[i][j];
      }  
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        if(t==1)
        {
              int x,y,z;
              cin>>x>>y>>z;
              cout<<F1[x][z]-F1[x][y-1]<<endl;
        }
        else if (t==2)
        {
             int u,v,t;
             cin>>u>>v>>t;
             cout<<F2[t][u]-F2[v-1][u]<<endl;
        }
    }
}