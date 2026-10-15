#include <iostream>

using namespace std;
int n,x[100],visited[100];


void inkq()
{
    for(int i=1;i<=n;i++)
       cout<<x[i];
    cout<<endl;
}
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        //xet xem xo the gan x[i]=j hay khong?
       if(visited[j] == 0)
       {
            visited[j]=1;
            x[i]=j;
            if(i == n)
                inkq();
            else
                Try(i+1);
            //backtrack:tra lai gia tri ban dau khi chua xet
            visited[j]=0;
       }
    }
}
int main()
{
     cin>>n;
     memset(visited,0,sizeof(visited));
     Try(1);
}