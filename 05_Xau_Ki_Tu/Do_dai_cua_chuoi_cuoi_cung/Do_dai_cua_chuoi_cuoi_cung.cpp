#include <bits/stdc++.h>

using namespace std;
int index(string s1)
{
	for(int i=s1.size()-2;i>0;i--)
	{
		if(s1[i]==' ')
		   return s1.size()-i-2;
	}
}
int main()
{
    string s,s1,word;
    getline(cin,s);
    s1="";
    stringstream ss(s);
    while(ss>>word)
    {
    	s1+=word+" ";
    }
    cout<<s1;
    cout<<index(s1)<<endl;
}

