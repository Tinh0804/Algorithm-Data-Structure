#include <iostream>


using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	//1 3 6 1 8 3
   	  int n,k,ind;
   	  cin>>n>>k;
   	  int a[1001];
   	  for(int i=1;i<=n;i++)
   	     cin>>a[i];
   	  int sum=0;
   	  for(int j=1;j<=k;j++)
   	     sum+=a[j];
   	  int res=sum;
   	  for(int j=k+1;j<=n;j++)
   	  {
   	      sum=sum-a[j-k]+a[j];
   	      if(sum>res)
   	      {
   	      	res=sum;
   	      	ind=j-k+1;
   	      }
      }
      cout<<res<<endl;
      for(int i=ind;i<ind+k;i++)
         cout<<a[i]<<" ";
      cout<<endl;
   	  
   }
}

