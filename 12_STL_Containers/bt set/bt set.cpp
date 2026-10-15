#include <bits/stdc++.h>
using namespace std;

int main()
{
  int mang[5]={2,1,2,1,3};
  set<int> se;
  for (int i=0;i<5;i++)
  {
  	se.insert(mang[i]);
  }
  cout<<se.size()<<endl;
  for(set<int>::iterator t=se.begin();t!=se.end();t++)
    cout<<*t<<" ";
}

