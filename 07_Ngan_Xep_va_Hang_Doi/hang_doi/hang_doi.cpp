#include <bits/stdc++.h>
#include <queue>
using namespace std;
//FIFO:queue:First in First out
//ham push de them 1 ptu vao trong hang doi
//ham pop de lay 1 ptu ra khoi hang doi
//ham empty de kiem tra hang doi co rong khong
//ham size de kiem tra kich thuoc hang doi
//ham front de lay ptu dau cua hang doi
int main()
{
   queue<int> q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   cout<<q.front()<<endl;
   q.pop();
   cout<<q.front()<<endl;
   cout<<q.size()<<endl;
   q.pop();
   q.pop();
   q.pop();
   cout<<q.empty()<<endl;
}

