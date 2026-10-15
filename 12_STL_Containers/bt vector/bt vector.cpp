#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> a;
  a.push_back(4);
  a.push_back(3);
  a.push_back(2);
  a.push_back(1);
  if (a.size()!=0)
      a.pop_back();
  if (a.empty())
     cout<<"EMPTY";
  else
     for (vector<int>::iterator t=a.begin();t!=a.end();t++)
	     cout<<*t<<" ";    
}

