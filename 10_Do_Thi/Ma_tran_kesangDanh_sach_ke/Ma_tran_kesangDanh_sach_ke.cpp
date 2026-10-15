#include <bits/stdc++.h>

using namespace std;
//5
//0 1 1 1 0   1:2 3 4
//1 0 1 1 1   2:1 3 4 5
//1 1 0 1 1 =>3:1 2 4 5
//1 1 1 0 1   4:1 2 3 5
//0 1 1 1 0   5:2 3 4
int main()
{
    int n;
    cin>>n;
    int a[101][101];
    vector<int> v[101];
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        cin>>a[i][j];
    for(int i=1;i<=n;i++)
    	for(int j=1;j<=n;j++)
    		if(a[i][j]==1)
    		{
    			v[i].push_back(j);
//    			v[j].push_back(i);Xem lai
            }
    cout<<endl;       
	for(int i=1;i<=n;i++)
	{
		cout<<i<<":";
		for(int it:v[i])
		{
			cout<<it<<" ";
		}
		cout<<endl;
	}
}
