
#include <bits/stdc++.h>
#include <stack>
using namespace std;
//LIFO:Last in first out
//push
//pop
//top//lay ra phan tu o dinh ngan xep
//size
//empty

int main()
{
   stack<int>st;
   st.push(1);
   st.push(4);
   st.push(6);
   st.push(2);
   cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<endl;
   cout<<st.size()<<endl;
   st.pop();
   st.pop();
   st.pop();
   cout<<st.empty()<<endl;
}

