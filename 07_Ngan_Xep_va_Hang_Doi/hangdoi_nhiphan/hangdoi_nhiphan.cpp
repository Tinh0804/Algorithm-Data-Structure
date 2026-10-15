#include <iostream>
#include <queue>
#include <string>
using namespace std;
vector<string> res;
void inti()
{

	queue<string>q;
	q.push("1");
    res.push_back("1");
	while (res.size()<1000)
	{
	   	string top=q.front();
	   	res.push_back(top+"0");
	   	res.push_back(top+"1");
	   	q.pop();
	   	q.push(top+"0");
	   	q.push(top+"1");
	}
}
int main()
{
   inti();
   int n;
   cin>>n;
   while (n--)
   {
   	int t;
   	cin>>t;
   	for (int i=0;i<t;i++)
   	{
   		cout<<res[i]<<" ";
	}
	cout<<endl;
    }
}

