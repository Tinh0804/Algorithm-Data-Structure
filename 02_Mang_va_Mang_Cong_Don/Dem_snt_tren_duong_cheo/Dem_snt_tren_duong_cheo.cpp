#include <iostream>
#include <math.h>
#include <set>
using namespace std;

bool snt(int a)
{
    if(a<2)
      return false;
    for(int i=2;i<=sqrt(a);i++)
       if(a%i==0)
          return false;
    return true;
}
int main()
{
    int a[101][101];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
         cin>>a[i][j];
    set<int> s;
    for(int i=0;i<n;i++)
    {
        if(snt(a[i][i]))
          s.insert(a[i][i]);
        if(snt(a[i][n-i-1]))
          s.insert(a[i][n-i-1]);
    }
    cout<<s.size()<<endl;
}