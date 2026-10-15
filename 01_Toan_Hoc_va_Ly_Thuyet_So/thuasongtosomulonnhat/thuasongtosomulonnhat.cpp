#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,dem,m;
    cin>>n;
    int res,mu=0;
    for(int i=2;i<sqrt(n);i++)
    {
    	if(n%i==0)
    	{
    		dem=0;
    		while(n%i==0)
    		{
    			dem++;
    			n=n/i;
    			if(dem>=mu)
    			{
    			  mu=dem;
    			  res=i;
    		    }
    		}
    	}
    }
    if(n!=1)
    {
       if(mu==0)
       {
       	mu=1;
       	res=n;
       }
    }
    cout<<res<<" "<<mu;
}

