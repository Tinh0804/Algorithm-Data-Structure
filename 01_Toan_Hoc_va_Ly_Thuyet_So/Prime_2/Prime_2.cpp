#include <iostream>
#include <math.h>

using namespace std;

void sansnt(bool a[],int n)
{
    a[0]=a[1]=false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(a[i])
            for(int j=i*i;j<n;j+=i)
                a[j]=false;
    }
}
int main()
{
    int l,r,dem,t; 
    cin>>t;
    bool a[1000];
    memset(a,true,sizeof(a));
    sansnt(a,1000);
    while(t--)
    {
        cin>>l>>r;
        dem=0;
        for(int i=l;i<=r;i++)
            if(a[i])
            {
                cout<<i<<" ";
                dem++;
            }
        cout<<endl<<dem<<endl;
    }
}