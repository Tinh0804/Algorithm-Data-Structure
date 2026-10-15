#include <bits/stdc++.h>

using namespace std;
//Cach 1:Vong lap for
int luy_thua(int a,int b)
{
	int res=1;
	for(int i=1;i<=b;i++)
	{
		res=res*a;
	}
	return res;
}
//Cach 2:Vong lap while
int luy_thua_np(int a,int b)
{
	int res=1;
	while(b!=0)
	{
		if(b%2==1)
		   res*=a;
		b/=2;
		a*=a;
	}
	return res;
}
//Cach 3:De Quy
int dq_luy_thua_np(int a,int b)
{
	if(b==0)
	  return 1;
	int x=dq_luy_thua_np(a,b/2);
    if(b%2==1)
       return x*x*a;
    else
       return x*x;
}
int main()
{
   int a,b;
   cin>>a>>b;
   cout<<luy_thua(a,b)<<endl;
   cout<<luy_thua_np(a,b)<<endl;
   cout<<dq_luy_thua_np(a,b)<<endl;
}

