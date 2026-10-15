#include <iostream>
#include <string.h>
#include <sstream>
#include <set>
using namespace std;

int main()
{
    string s1,s2,word1,word2;
    getline(cin,s1);
    getline(cin,s2);
    set<string> se1;
    set<string> se2;
    for(int i=0;i<s1.size();i++)
      s1[i]=tolower(s1[i]);
    for(int j=0;j<s2.size();j++)
      s2[j]=tolower(s2[j]);
    stringstream ss1(s1);
    stringstream ss2(s2);
    
    while(ss1>>word1)
        se1.insert(word1);
    while(ss2>>word2)
       se2.insert(word2);
    for(auto x:se1)
    {
        if(!se2.count(x))
           cout<<x<<" ";
    }
}