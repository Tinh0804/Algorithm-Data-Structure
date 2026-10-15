#include <bits/stdc++.h>

//i-1,j-1  i-1,j   ,i-1,j+1
//i,j-1     i,j     i,j+1
//i+1,j-1   i+1,j    i+1,j+1
using namespace std;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int main()
{
    int m,n,d;
    d=0;
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
      	       if(i1>=0&&j1>=0&&i1<m&&j1<n)
      	  	      if(a[i][j]<=a[i1][j1])
      	  	      {
      	  	    	kt=false;
      	  	    	break;
      	  	      }  
		  }
		  if(kt)
		    d++;
      }
    cout<<"So diem cuc dai:"<<d<<endl;
}

