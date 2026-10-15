#include <iostream>
#include <string.h>

//add
//egg
//true
using namespace std;
int find(string s,int i)
{
    for(int j=i+1;j<s.size();j++)
      if(s[i]==s[j])
         return j;
    return -1;
}
int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    bool kt=false;
    for(int i=0;i<s.size();i++)
    {
        int j=find(s,i);
        if(j>0)
        {
            if(t[i]==t[j])
              kt=true;
        }
    }
    cout<<kt<<endl;
}