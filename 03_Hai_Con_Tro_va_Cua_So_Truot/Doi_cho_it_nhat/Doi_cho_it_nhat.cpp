#include <bits/stdc++.h>
//doi cho nhieu nhat 1 lan de so doi duoc lo nhat ma be hon so ban dau
//in:123546
//out:123456
using namespace std;
int vi_tri(string s)
{
	int i=s.size()-2;
	while(i>=0&&s[i]<s[i+1])
	{
		i--;
	}
	return i;
	if(i==-1)
	  return -1;
}
int main()
{
      int t;
      cin>>t;
      cin.ignore();
      while(t--)
      {
      	string s;
      	getline(cin,s);
      	if(vi_tri(s)>=0)
      	{
      	  for(int i=s.size()-1;i>vi_tri(s);i--)
      		if(s[i]<s[vi_tri(s)])
      		{
      			//12435
      			swap(s[i],s[vi_tri(s)]);
      			if(s[vi_tri(s)]==s[i-1])
      			    swap(s[i],s[i-1]);
      			break;
      		}
      	  cout<<s<<endl; 
        }
         else
            cout<<vi_tri(s)<<endl;
      }   
}

