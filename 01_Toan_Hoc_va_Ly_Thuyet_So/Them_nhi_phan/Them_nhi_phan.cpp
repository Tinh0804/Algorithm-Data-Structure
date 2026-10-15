#include <bits/stdc++.h>

using namespace std;
int main()
{
	int m,n;
    string mang1,mang2;
    int s1[50],s2[50];
    //1010
    //1011
    //10101
    getline(cin,mang1);
    getline(cin,mang2);
	if(mang1.size()>mang2.size())
	{
		m=mang1.size()-mang2.size();
	    for(int i=0;i<m;i++)
	       mang2.insert(mang2.begin(),'0');
	}
	if(mang1.size()<mang2.size())
	{
		n=mang2.size()-mang1.size();
	    for(int i=0;i<n;i++)
	       mang1.insert(mang1.begin(),'0');
	}
//	cout<<mang1<<endl;
//	cout<<mang2<<endl;
	for(int i=0;i<mang1.size();i++)
	{
		s1[i]=mang1[i]-'0';
		s2[i]=mang2[i]-'0';
	}
	string str;
	for(int j=mang1.size()-1;j>=0;j--)
	{
		if((s1[j]+s2[j])>=2)
		{
		   if((s1[j]+s2[j])%2==0)
		   {
		      s1[j-1]++;
		      str+="0";
		   }
		   else
		    {
		    	s1[j-1]++;
		    	str+="1";
			}
	    }
		else
		  str+=to_string(s1[j]+s2[j]);
		
	}
	if(s1[0]>=2)
//		   str.insert(str.begin(),'1');
        {
        	str[mang1.size()-1]='0';
        	str+="1";
		}
	cout<<endl;
	for(int i=str.size()-1;i>=0;i--)
	   cout<<str[i]<<" ";
	   
}
