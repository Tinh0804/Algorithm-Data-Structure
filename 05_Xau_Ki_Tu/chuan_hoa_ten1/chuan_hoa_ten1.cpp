#include <bits/stdc++.h>
//1
//in:Le hOnaG QuacH TinH
//out:Le Hoang Quach,TINH
using namespace std;
void viethoa_dau(string &s)
{
	for(int i=1;i<s.size();i++)
	   s[i]=tolower(s[i]);
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    	 string s,st,word;
    	 getline(cin,s);
    	 for(int i=0;i<s.size();i++)
    	    s[i]=toupper(s[i]);
    	 vector<string> v;
    	 stringstream ss(s);
    	 st="";
    	 while(ss>>word)
    	 {
    	 	v.push_back(word);
    	 }
    	 for(int i=0;i<v.size()-1;i++)
    	 { 
    	    viethoa_dau(v[i]);
    	    st+=v[i]+" ";
    	 }
    	 st.erase(st.size()-1);
    	 st+=","+v[v.size()-1];
    	 cout<<st<<endl;
    }
}

