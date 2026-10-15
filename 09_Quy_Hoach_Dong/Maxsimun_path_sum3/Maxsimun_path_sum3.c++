#include <iostream>
#include <algorithm>

using namespace std;

int dx[3]={-1,0,1};
int dy[3]={-1,-1,-1};
// 5
// 2 -8 2 9 0
// -5 6 6 -1 6
// 3 5 0 3 9
// 9 -8 9 7 0
// -4 6 1 -2 0
int main()
{
   int n;
   cin>>n;
   int a[n+1][n+1];
   int F[n+1][n+1];
   for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
        cin>>a[i][j];
    
   for(int i=1;i<=n;i++)
   { 
        F[i][1]=a[i][1];
        F[0][i]=F[n+1][i] =-1e9;
   }
   for(int j=2;j<=n;j++)
   {
      for(int i=1;i<=n;i++)
      {
        // F[i][j]=max(F[i][j-1],F[i-1][j-1],F[i+1][j-1])+a[i][j];
        int tam=0;
        for(int k=0;k<3;k++)
        {
            int i1=i+dx[k];
            int j1=j+dy[k];
            if(i1>0 && j1>0 && i1<=n && j1<=n && F[i1][j1]>=tam)
                tam=F[i1][j1];
        }
        F[i][j]=tam+a[i][j];
      }
   }
   int ans=0;
   for(int i=1;i<=n;i++)
      ans=max(ans,F[i][n]);
   cout<<ans<<endl;
   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=n;j++)
            cout<<F[i][j]<<" ";
        cout<<endl;
   }

}