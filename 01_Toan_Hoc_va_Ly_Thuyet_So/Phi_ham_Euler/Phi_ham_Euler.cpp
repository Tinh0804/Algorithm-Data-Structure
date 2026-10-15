#include <bits/stdc++.h>

using namespace std;
//int ucln(int a,int b)
//{
//	if(a>b)
//	   a=a-b;
//	else
//	   b=b-a;
//	return a;
//}
int phi(int n)
{
	int res=n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			  n=n/i;//cong thuc
			res=res-res/i;//phi ham_euler(1-1/i)
		}
	}
	if(n!=1)
	  res=res-res/n;
	return res;
}
int main()
{
  int n;
  cin>>n;
  cout<<phi(n)<<endl;
}

