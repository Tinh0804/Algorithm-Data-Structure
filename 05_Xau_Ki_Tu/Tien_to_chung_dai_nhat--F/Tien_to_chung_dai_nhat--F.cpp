#include <bits/stdc++.h>

using namespace std;
int min(char a[][100],int n)
{
	int min=strlen(a[0]);
	for(int i=1;i<n;i++)
	  if(strlen(a[i])<min)
	    min=strlen(a[i]);
	return min;
}
int main()
{
   char mang[100][100];
   int n;
   cin>>n;
//   cin.ignore();
   for(int i=0;i<n;i++)
      cin>>mang[i];
   for(int i=0;i<n;i++)
      cout<<mang[i]<<" ";
   int i,j=0;
   while(i<min(mang,n))
   {
   	 mang[i][j]
   }
}

