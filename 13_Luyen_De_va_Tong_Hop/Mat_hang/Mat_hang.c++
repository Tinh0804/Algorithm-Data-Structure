#include <iostream>
#include <string.h>
#include <map>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

// 7
// May giat
// Philips
// Cai
// 831000 1196000
// Noi com dien
// Sanyo
// Cai 
// 499000 676000
// Noi com dien
// SHARP
// Cai
// 759000 937000
// May lanh
// SANTO
// Cai
// 10000 105000
// May giat
// SATO
// Cai
// 259000 413000
// Ti vi
// SHARP
// Cai
// 510000 561000
// May lanh
// Sunhouse
// Cai
// 163000 532000

struct MH{
    string ma,ten,hang,donvi;
    int nhap,ban;
};
string getma(string s)
{
   string word;
   string res="";
   stringstream ss(s);
   while(ss >> word)
    {
       res+=toupper(word[0]);
    }
   return res;
}
bool cmp(MH a,MH b)
{
    int ln1=a.ban-a.nhap;
    int ln2=b.ban-b.nhap;
    if(ln1!=ln2)
      return ln1>ln2;
    else
      return a.ma<b.ma;
}
int main()
{
    int n;
    cin>>n;
    vector<MH> v;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        string ten;
        getline(cin,ten);
        string hang;
        getline(cin,hang);
        string donvi;
        getline(cin,donvi);
        int nhap,ban;
        cin>>nhap>>ban;
        //cap ma mat hang
        string ma=getma(ten);
        mp[ma]++;
        string tmp=to_string(mp[ma]);
        while(tmp.size()<4)
        {
            tmp="0"+tmp;
        }
        ma=ma+tmp;
        MH x;
        x.ma=ma;
        x.ten=ten;
        x.hang=hang;
        x.donvi=donvi;
        x.ban=ban;
        x.nhap=nhap;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it:v)
    {
        cout<<it.ma<<" "<<it.ten<<" "<<it.hang<<" "<<it.donvi<<" "<<it.nhap<<" "<<it.ban<<endl;
    }
}

