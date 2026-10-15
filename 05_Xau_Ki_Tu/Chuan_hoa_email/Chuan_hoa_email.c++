#include <iostream>
#include <string.h>
#include <vector>
#include <utility>
#include <map>
#include <sstream>
using namespace std;

string thuong(string s)
{
    for(int i=0;i<s.size();i++)
    {
       s[i]=tolower(s[i]);   
    }
    return s;
}
int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        string s,tmp;
        getline(cin,s);
        vector<string> v;
        stringstream ss(s);
        while(ss>>tmp)
        {
            v.push_back(tmp);
        }
        string ns=v[v.size()-1];
        string email=thuong(v[v.size()-2]);
        for(int i=0;i<v.size()-2;i++)
        {
                email+=tolower(v[i][0]);//kí tự đầu tiên của dãy đầu tiên

        }
        mp[email]++;
        if(mp[email]==1)
          cout<<email<<"@xyz.edu.vn\n";
        else
          cout<<email<<mp[email]<<"@xyz.edu.vn\n";
        stringstream ss2(ns);
        while(getline(ss2,tmp,'/'))
        {
             cout<<stoi(tmp);
        }
        cout<<endl;
    }
    
}