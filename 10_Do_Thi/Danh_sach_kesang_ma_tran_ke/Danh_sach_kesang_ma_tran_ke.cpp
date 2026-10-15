#include <bits/stdc++.h>

using namespace std;
//5
//2 3 4     0 1 1 1 0
//1 3 4 5   1 0 1 1 1
//1 2 4 5 =>1 1 0 1 1
//1 2 3 5   1 1 1 0 1
//2 3 4     0 1 1 1 0
int main()
{
   int n;
   cin>>n;
   int a[101][101];
   cin.ignore();
   for(int i=1;i<=n;i++)
   {
   	  string s,num;
   	  getline(cin,s);
   	  stringstream ss(s);
   	  while(ss>>num)
   	  {
   	  	a[i][stoi(num)]=1;
	  }
   }
   cout<<endl;
   for(int i=1;i<=n;i++)
   {
   	  for(int j=1;j<=n;j++)
   	    cout<<a[i][j]<<" ";
   	  cout<<endl;
   }
}
