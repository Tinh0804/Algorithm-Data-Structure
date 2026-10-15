#include <bits/stdc++.h>

using namespace std;
//5
//0 1 1 1 0  1 2
//1 0 1 1 1  1 3 
//1 1 0 1 1=>1 4
//1 1 1 0 1  2 3
//0 1 1 1 0  2 4
//           2 5
//           3 4
//           3 5
//           4 5
int main()
{
   int n;
   cin>>n;
   int a[100][100];
   vector<pair<int,int> > v;
   for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
       cin>>a[i][j];
   for(int i=1;i<=n;i++)
   {
   	  for(int j=1;j<=n;j++)
   	  {
   	  	if(a[i][j]==1 && i<j)
   	  	{
   	  		v.push_back({i,j});
		}
	  }
   }
   for(auto &it:v)
     cout<<it.first<<" "<<it.second<<endl;
}
