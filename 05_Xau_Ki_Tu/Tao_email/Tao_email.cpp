#include <bits/stdc++.h>
//1
//in:lE hOaNg quAch Tinh
//out:tinhqhl@gmail.com
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    	string s,s1,word;
    	getline(cin,s);
        vector<string> st; 
    	for(int i=0;i<s.size();i++)
    	   s[i]=tolower(s[i]);
    	stringstream ss(s);
    	s1="";
    	while(ss>>word)
    	{
    		st.push_back(word);
    	}
    	s1+=st[st.size()-1];
    	for(int i=st.size()-2;i>=0;i--)
    	    s1+=st[i].substr(0,1);
        s1+="@gmail.com";
        cout<<s1<<endl;
    }
}

