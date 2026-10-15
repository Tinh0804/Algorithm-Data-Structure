#include <iostream>
#include <map>
#include <string.h>
#include <vector>
#include <utility>
#include <algorithm>

// 5
// [Spain] 3 - 7 [USA]
// [Senegal] 9 - 7 [NetherLands]
// [South Korea] 6 - 6 [NetherLands]
// [France] 7 - 7 [Spain]
// [South Korea] 4 - 4 [Poland]

using namespace std;
bool cmp(pair<string,pair<int,int> >a,pair<string,pair<int,int> >b)
{
    if(a.second.first!=b.second.first)
      return a.second.first>b.second.first;
    else
    {
        if(a.second.second==b.second.second)
          return a.first<b.first;
        else
          return a.second.second>b.second.second;
    }
}
int main()
{
    string s;
    int t;
    map<string,pair<int,int> > mp;
    cin>>t;
    while(t--)//đọc hết dòng thì dừng lại
    {
          cin.ignore();
          getline(cin,s);
          string team1="";
          string team2="";
          int i=1;
          while(s[i]!=']')
          {
             team1+=s[i];
             ++i;
          }
          i+=2;
          int x=0,y=0;
          while(s[i]!=' ')
          {
            x=x*10+(s[i]-'0');
            ++i;
          }
          i+=3;
          while(s[i]!=' ')
          {
            y=y*10+(s[i]-'0');
            i++;
          }
          i+=2;
          while(i<s.size()-1)
          {
            team2+=s[i];
            ++i;
          }
          if(mp.count(team1)==0)
             mp[team1].first=mp[team1].second=0;
          if(mp.count(team2)==0)
             mp[team2].first=mp[team2].second=0;
          if(x>y)
             mp[team1].first+=3;
          else if(x<y)
             mp[team2].first+=3;
          else
           {
             mp[team1].first+=1;
             mp[team2].first+=1;
           }
           mp[team1].second+=x-y;
           mp[team2].second+=y-x;
    }
    vector<pair<string,pair<int,int> > > v;
    for(auto it:mp)
      v.push_back(it);
    sort(v.begin(),v.end(),cmp);
    for(auto it:v)
      cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
    
}
