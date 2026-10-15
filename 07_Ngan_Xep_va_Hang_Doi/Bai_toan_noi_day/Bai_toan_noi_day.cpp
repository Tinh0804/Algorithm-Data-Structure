#include <bits/stdc++.h>

using namespace std;
int main()
{
   int d;
   cin>>d;
   while(d--)
   {
   	  int n;
   	  cin>>n;
   	  int a[n];
   	  for(int i=0;i<n;i++)
   	    cin>>a[i];
   	  priority_queue<int,vector<int>,greater<int> > p;
   	  for(int i=0;i<n;i++)
   	    p.push(a[i]);
   	  int s=0;
   	  while(p.size()>1)
   	  {
   	  	 int tong1=p.top();
   	  	 p.pop();
   	  	 int tong2=p.top();
   	  	 p.pop();
   	  	 s+=tong1+tong2;
   	  	 p.push(tong1+tong2);
   	  }
   	  cout<<s<<endl;
   }
   
}

