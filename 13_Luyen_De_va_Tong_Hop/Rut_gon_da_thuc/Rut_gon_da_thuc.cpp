#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
using namespace std;


// 5
// 4x^2+1x^0+5x^2+1x^1+4x^2+5x^3+2x^3+2x^4+3x^4
// 1x^2+2x^1+4x^1+5x^2+5x^2
// 1x^0+1x^3+2x^2+4x^2+4x^3+3x^1
// 2x^3+4x^2+5x^0+2x^1+4x^1+1x^1+3x^3+2x^2+1x^4
// 1x^4+4x^4+3x^3+4x^0+5x^1+4x^1+1x^4+2x^2+1x^4
map<int,string> mp1;
void solve(string s,int i)
{
    stringstream ss(s);
    string word;
    map<int,int> mp;
    while(getline(ss,word,'+'))
    {
       
       int mu,thuaso,i;
       mu=i=thuaso=0;
       while(i<word.size() && isdigit(word[i]))
        {   
            thuaso=thuaso*10 +word[i]-'0';
            i++;
        }
        while(i<word.size() && !isdigit(word[i]))
            i++;
        while(i<word.size() && isdigit(word[i]))
         {
            mu=mu*10+word[i]-'0';
            i++;
         }
        mp[mu]+=thuaso;
       
    }
    for(auto x:mp)
    {
        mp1[i]+=to_string(x.second)+"x^"+to_string(x.first)+" + ";
    }
    mp1[i].erase(mp1[i].end()-2);
}

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++)
    {
        string s;
        getline(cin,s);
        solve(s,i);
    }
    cout<<endl;
    for(auto it:mp1)
    {
        cout<<it.second<<endl;
    }
}