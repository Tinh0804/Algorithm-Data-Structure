#include <iostream>
#include <math.h>
using namespace std;
//48
//là số đẹp nếu chia hết cho bất kì 1 snt và số đó cũng chia hết snt^3 
bool check(int n)
{
   for(int i=2;i<=sqrt(n);i++)
   {
        if(n%i == 0)
        {
            int mu=0;
            while(n%i==0)
            {
                mu++;
                n/=i;
            }
            if(mu>=3)
               return true;
        }
   }
   return false;
}
int main()
{
    int n;
    cin>>n;
    if(check(n))
      cout<<"Yes\n";
    else
      cout<<"No\n";
}