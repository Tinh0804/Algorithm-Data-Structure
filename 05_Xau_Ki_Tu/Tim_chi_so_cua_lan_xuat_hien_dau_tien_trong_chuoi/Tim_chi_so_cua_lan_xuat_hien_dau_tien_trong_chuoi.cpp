#include <bits/stdc++.h>

using namespace std;
int vitri(string s,string str)
{
	int i,j;
    i=0;
    j=0;
	while(i<s.size())
    {
    	while(s[i]==str[j])
    	{
    		i++;
    		j++;
    		if(j==str.size())
    	        return i-str.size();	   
    	}
    	i++;
    	j=0;
    }
    return -1;
}
int main()
{
    string s,str;
    getline(cin,s);
    getline(cin,str);
    
    cout<<vitri(s,str)<<endl;
}

