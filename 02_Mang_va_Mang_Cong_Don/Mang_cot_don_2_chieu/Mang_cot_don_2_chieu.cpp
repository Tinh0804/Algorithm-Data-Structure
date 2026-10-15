#include <bits/stdc++.h>

using namespace std;
int main()
{
   int m,n;
   cout<<" Nhap so dong,cot can tinh tong:";
   cin>>m>>n;
   int a[m][n],b[m][n];
   for(int i=1;i<=m;i++)
   {
   	for(int j=1;j<=n;j++)
   	{
   	     cout<<"Nhap phtu thu["<<i<<"]["<<j<<"]:";
   	     cin>>a[i][j];
   	}
   }
   for(int i=1;i<=m;i++)
   	 for(int j=1;j<=n;j++)
	    b[i][j]=b[i-1][j]+b[i][j-1]-b[j-1][i-1]+a[i][j];
   int d1,d2,c1,c2,tong;
   cout<<"Nhap d1,c1,d2,c2:";
   cin>>d1>>c1>>d2>>c2;
   tong=b[d2][c2]-b[d1-1][c2]-b[d2][c1-1]+b[d1-1][c1-1];
   cout<<"Tong:"<<tong<<endl;
}

