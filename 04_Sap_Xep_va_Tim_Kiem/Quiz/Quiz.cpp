#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a[7]={5,5,1,2,3,4,1};
   set<int> se(a,a+7);
   set<int>::iterator it=se.find(3);
   --it;
   se.erase(it);
   for (set<int>::iterator i=se.begin();i!=se.end();i++)
      cout<<*i<<" ";
}
