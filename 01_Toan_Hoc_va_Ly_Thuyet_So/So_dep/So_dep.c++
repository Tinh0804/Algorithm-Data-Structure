#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
//1 số được xem là số đẹp nếu vị trí chẳn là số chẵn,lẻ là số lẻ

string check(long n)
{
   string s;
   if(n<0)
      n=abs(n);
    s=to_string(n);
   return s;
}
bool kt(string s)
{
    for(int i=0;i<s.size();i++)
        if((i+1)%2 != (s[i]-'0')%2)
           return false;
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        long n;
        cin>>n;
        s=check(n);
        if(kt(s))
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}
