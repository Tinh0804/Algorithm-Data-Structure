#include <iostream>
#include <string>
using namespace std;

void xnp(string s)
{
  int i=s.length()-1;
  while(i>=0 && s[i]=='1')
  {
  	s[i]=0;
  	i--;
  }
  if (i!=-1)
  {
  	s[i]='1';
  }
//  for (int j=0;i<s.length()-1;j++)
       cout<<s<<endl;	
}
	
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	string s;
  	cin>>s;
  	xnp(s);
  }
}

