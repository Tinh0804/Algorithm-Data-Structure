#include <iostream>
#include <queue>
#include <string>
using namespace std;
vector<string> v;
void bs()
{
	queue<string>q;
	q.push("9");
	v.push_back("9");
	while(v.size()<999999)
	{
		string first=q.front();
		q.push(first+"0");
		q.push(first+"9");
		q.pop();
		v.push_back(first+"0");
		v.push_back(first+"9");
	}
}
int main()
{
  bs();
  int t;
  cin>>t;
  vector<int> so;
  while(t--)
  {
  	int n;
  	cin>>n;
  	for (int i=0;i<v.size();i++)
  	{
  		int hd=atoi(v[i]);
  		so.push_back(hd);
    }
  }
  for (vector<int>::iterator j=so.begin();j!=so.end();j++)
     cout<<*j<<",";
}

