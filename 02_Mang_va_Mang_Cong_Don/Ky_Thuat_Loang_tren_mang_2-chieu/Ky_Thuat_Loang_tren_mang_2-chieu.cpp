#include <iostream>
//dem so diem cuc dai cua mang 2 chieu
//diem cuc dai la diem lon nhat so voi cac so dung canh no
//i-1,j-1  i-1,j  i-1,j+1
//i,j-1    i,j    i,j+1            
//i+1,j-1  i+1,j  i+1,j+1
using namespace std;
int main()
{
   int m,n,dem;
   dem=0;
   int dx[8]={-1,-1,-1,0,0,1,1,1};
   int dy[8]={-1,0,1,-1,1,-1,0,1};
   cout<<"Nhap chi so hang,cot:";
   cin>>m>>n;
   int a[m][n];
   for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
         cin>>a[i][j];
   for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
      {
      	  bool kt=true;
      	  for(int k=0;k<8;k++)
      	  {
      	  	  int i1=i+dx[k];
      	  	  int j1=j+dy[k];
      	  	  if(i1>=0&&i1<m&&j1>=0&&j1<n)//dang bao cac o xem co nam trong mang 2 chieu
      	  	    if(a[i1][j1]>=a[i][j])
      	  	    {
      	  	    	kt=false;
      	  	    	break;
      	  	    }
      	  }
      	  if(kt)
      	    dem++;
      }
      cout<<"So luong cuc dai:"<<dem;
}

