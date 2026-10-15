#include <iostream>

using namespace std;
int max(int a[],int l,int r)
{
	int max=a[l+1];
	int tg;
	for(int i=l+1;i<=r;i++)
	  if(a[i]>=max)
	    {
	    	max=a[i];
	    	tg=i;
	    }
	return tg;
}
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
   	  cin>>a[i];
   }
   int d,l,r,lon,j;
   d=0;
   r=a[0];
   l=0;
   // 3 2 1 1 4 1
   while(r<n)
   {	
     d++;
   	 l=max(a,l,r);
   	 lon=a[l];
   	 r=l+lon;
   }
   cout<<d;
}

