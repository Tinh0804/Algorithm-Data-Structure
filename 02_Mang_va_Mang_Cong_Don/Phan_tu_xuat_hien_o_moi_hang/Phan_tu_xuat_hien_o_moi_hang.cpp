#include <iostream>

using namespace std;

int cnt[10005];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int x;
            cin>>x;
            if(cnt[x]==i-1)
               cnt[x]=i;
        }
    }
    bool check=false;
    for(int i=0;i<=100;i++)
       if(cnt[i]==n)
       {
            cout<<i<<" ";
            check=true;
       }
    if(!check)
       cout<<"NOT FOUND\n";
// 4
// 1 2 2 3
// 2 1 2 4
// 1 4 5 2
// 2 2 3 1
}