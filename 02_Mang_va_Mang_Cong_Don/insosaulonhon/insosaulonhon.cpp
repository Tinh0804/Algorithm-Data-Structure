#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a[7]={3,4,2,5,1,6,2};
   int r;
   stack<int>st;
   st.push(a[0]);
   for (int i=1;i<7;i++)
   {
   	if(a[i]>st.top()&&!st.empty())
   	{
   		st.pop(st.top());
   		st.push(a[i]);
   		cout<<st.top()<<" ";
	}
	if(st.empty())
	   st.push(-1);
   }
}

