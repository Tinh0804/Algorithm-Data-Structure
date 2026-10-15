#include <iostream>

using namespace std;

int main()
{
    int n,d,dem;
    cin>>n>>d;
    int a[n];
    dem=0;
    for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=1;i<n;i++)
    {
        while(a[i]<=a[i-1])
        {
            dem++;
            a[i]+=d;
        }
    }
    for(int x:a)
      cout<<x<<" ";
    cout<<endl<<dem<<endl;
}