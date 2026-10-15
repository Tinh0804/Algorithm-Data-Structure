#include <iostream>
#include <math.h>

using namespace std;
const int maxn=(int)1E7;
bool a[maxn+1];

void sang()
{
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(int i=2;i<=sqrt(maxn);i++)
    {
        if(a[i])
        for(int j=i*i;j<=maxn;j+=i)
           a[j]=false;
    }
}

bool check(int n)
{
    int last=n%10;
    while(n>0)
    {
        if(n%10>last)
          return false;
        n=n/10;
    }
    return true;
}

int main()
{
    int n,dem;
    cin>>n;
    dem=0;
    sang();
    for(int i=2;i<=n;i++)
    {
        if(a[i] && check(i))
        {
           dem++;
           cout<<i<<" ";
        }
    }
    cout<<endl<<dem<<endl;
}