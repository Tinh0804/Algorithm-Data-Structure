#include <bits/stdc++.h>

using namespace std;
int main()
{
   string s;
   getline(cin,s);
   stringstream ss(s);
   string s1,word,st;
   st="";
   cin>>s1;
   while(ss>>word)
   {
   	    if(s1.compare(word)!=0)
   	        st=st+word+" ";
   }
   st.erase(st.size()-1);
   cout<<st<<endl;
}

