#include <bits/stdc++.h>
//priority_queue:hang doi uu tien
using namespace std;
int main()
{
   priority_queue<int>pq;//khai bao hang doi theo thu tu lon nhat la phan tu dau tien
// priority_queue<int,vector<int>,greater<int>> pq;//khai bao hang doi theo thu tu nhor nhat la phan tu dau tien
   pq.push(1);
   pq.push(2);
   pq.push(3);
   pq.push(4);
   pq.push(5);
   cout<<pq.top()<<endl;
   pq.push(10);
   pq.push(9);
   cout<<pq.top()<<endl;
   pq.pop();
   cout<<pq.top()<<endl;
}

