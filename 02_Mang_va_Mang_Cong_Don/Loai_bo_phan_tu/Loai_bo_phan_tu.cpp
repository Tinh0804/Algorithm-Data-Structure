#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,val,d;
    cin>>n;
    cin>>val;
    vector<int> v;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    for(int j=0;j<n;j++)
    	if(a[j]!=val)
    	   v.push_back(a[j]);
    d=n-v.size();
    cout<<"Do dai:"<<v.size()<<endl;
    if(d==0)
    {
      for(vector<int>::iterator t=v.begin();t!=v.end();t++)
         cout<<*t<<",";
    }
    else
    {
    	for(vector<int>::iterator k=v.begin();k!=v.end();k++)
          cout<<*k<<",";
        for(int i=0;i<d;i++)
          cout<<"_,";
    }
}

