#include <bits/stdc++.h>
//kiem tra trong cua so k phan tu co phan tu nao trung nhau hay khong
//Neu co thi in ra YES
//Neu khong thi in ra NO
using namespace std;
bool kt()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	   cin>>a[i];
	set<int>s;
	for(int i=0;i<k;i++)
	{
		if(s.count(a[i]))
		   return true;
		s.insert(a[i]);
	}
	for(int i=k;i<n;i++)
	{
		 s.erase(a[i-k]);
		 if(s.count(a[i]))
		     return true;
		 s.insert(a[i]);
		 
	}
	return false;
}
int main()
{
  if(kt())
    cout<<"YES\n";
  else
    cout<<"NO\n";
}

