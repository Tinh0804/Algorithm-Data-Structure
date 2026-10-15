#include <iostream>
#include <math.h>
using namespace std;

void san_snt(int n)
{
    bool prime[n+1];
    memset(prime,1,sizeof(prime));
    prime[0]=prime[1]=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
                   prime[j]=0;
        }
    }
    for(int i=1;i<=n;i++)
      if(prime[i]==1)
        cout<<i<<" ";
}
int main()
{
   int n;
   cout<<"Mời bạn nhập n:";
   cin>>n;
   san_snt(n);
}
