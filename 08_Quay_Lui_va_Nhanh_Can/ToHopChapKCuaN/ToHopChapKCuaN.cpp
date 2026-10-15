#include <iostream>

using namespace std;
int n,x[100],k;

void inkq()
{
    for(int i=1;i<=k;i++)
       cout<<x[i];
    cout<<endl;
}
//max i:n-k+1
//min i:x[i-1]+1
void Try(int i)
{
    //Duyet cac kha nang ma x[i] co the nhan duoc
    for(int j=x[i-1]+1;j<=n-k+i;j++)
    {
        x[i]=j;
        if(i == k)
           inkq();
        else
            Try(i+1);
    }
}
int main()
{
    //So cau hinh cua to hop chap k cua n
     cin>>n>>k ;
    //  x[0]=0;
     Try(1);
}