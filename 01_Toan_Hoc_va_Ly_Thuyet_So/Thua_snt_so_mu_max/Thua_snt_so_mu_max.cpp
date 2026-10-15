#include <iostream>
#include <math.h>
#include <map>
using namespace std;

int main()
{
    int n,max,so;
    cin>>n;
    map<int,int> mp;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            while(n%i==0)
            {
                mp[i]++;
                n/=i;
            }
    if(n>0)
       mp[n]++;
    max=0;
    for(auto it:mp)
       {
          cout<<it.first<<":"<<it.second<<" ";
          if(it.second>max)
          {
              max=it.second;
              so=it.first;
          }
       }
    cout<<endl<<so<<"^"<<max<<endl;
}