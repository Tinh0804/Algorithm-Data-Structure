#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin>>s;
  stack<char>st;
  for (int i=0;i<s.size();i++)
  {
  	if (s[i]=='(')
  	  st.push(s[i]);
  	else
  	{
  		if(st.empty())
  		{
//  		  cout<<"Khong hop le";
  		  break;
  	    }
	    else
	     st.pop();
    }
   }
   if(st.empty())
       cout<<"\nHop le";
   else
       cout<<"\nKhong hop le";
  
    
}

