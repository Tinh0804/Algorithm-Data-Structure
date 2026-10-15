#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  int a[n];
  multiset<int>ms;
  for (int j=0;j<n;j++)
     cin>>a[j];
  for (int i=0;i<k;i++)
  {
  	ms.insert(a[i]);
  }
  cout<<*ms.rbegin()<<" ";
  for (int i=k;i<n;i++)
  {
  	ms.erase(ms.find(a[i-k]));
  	ms.insert(a[i]);
  	cout<<*ms.rbegin()<<" ";
  }
  
}

