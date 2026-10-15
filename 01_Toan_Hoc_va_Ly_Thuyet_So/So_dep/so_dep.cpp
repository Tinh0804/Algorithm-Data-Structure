#include <bits/stdc++.h>
//so dep
//so dep la so thuan nghich va chi toan cac so chan
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		bool kt;
		string s;
		getline(cin,s);
		int i=0;
		int j=s.size()-1;
		while(i<j)
		{
			if(s[i]==s[j]&&(s[i]-'0')%2==0)
			   kt=true;
			else
			   kt=false;
			i++;
			j--;
		}
		if(kt)
		   cout<<"YES\n";
		else
		   cout<<"NO\n";
	}
    
}

