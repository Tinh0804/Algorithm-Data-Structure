#include <bits/stdc++.h>

using namespace std;
int Merga(int a[],int l,int m,int r)
{
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r);
	int i=0;
	int j=0;
	while(i<x.size()&&j<y.size())
	{
		if(x[i]<=y[j])
		{
			a[l]=x[i];
			i++;
			l++;
		}
		else
		{
			a[l]=y[j];
			j++;
			l++;
		}
		while(i<x.size())
		{
			a[l]=x[i];
			i++;
			l++;
		}
		while(j<y.size())
		{
			a[l]=y[j];
			j++;
			l++;
		}
	}
}
void Mergasort(int a[],int l,int r)
{
	if(l>=r)
	  return ;
	int m=(l+r)/2;
	Mergasort(a,l,m-1);
	Mergasort(a,m+1,r);
	Merga(a,l,m,r);
}
int main()
{
   int n,s,l,r,ans;
   cin>>n>>s;
   int a[n];
   for(int i=0;i<n;i++)
       cin>>a[i];
   l=0;
   r=n-1;
   Mergasort(a,l,r);
   bool kt=false;
   while(l<r)
   {
   	  ans=0;
   	  ans=a[l]+a[r];
   	  //1 5 8 2
   	  if(ans<s)
   	  	  l++;
   	  if(ans>s)
   	      r--;
   	  if(ans==s)
   	  {
   	  	 cout<<l+1<<" "<<r+1;
   	     kt=true;
   	     break;
      }
   }
   if(kt==false)
      cout<<"IMPOSSIBLE!";
}

