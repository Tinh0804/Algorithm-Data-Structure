#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n,d;
   cin>>n;
   set<int> s;
   int a[n];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
     s.insert(a[i]); 
   }
   d=n-s.size();
   vector<int> v;
   cout<<"Do dai:"<<s.size()<<endl;
   if(d==0)
     for(set<int>::iterator k=s.begin();k!=s.end();k++)
        cout<<*k<<",";
   else
   {
   	 for(set<int>::iterator k=s.begin();k!=s.end();k++)
   	    cout<<*k<<",";
   	 for(int i=0;i<d;i++)
   	    cout<<"_,";
   }
}

