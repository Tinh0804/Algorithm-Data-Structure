#include <bits/stdc++.h>
#include <deque>
using namespace std;
//stack:LIFO
//queue:FIFO
//deque:double end queue
//size()
//push_front():day vao dau
//push_back():day vao cuoi
//pop_front():xoa dau
//pop_back():xoa 1 phan tu  cuoi
//front():lay ra phan tu dau
//back():lay ra phan tu cuoi
int main()
{
    deque<int>d;
    d.push_front(2);
    d.push_back(4);
    d.push_back(5);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.size()<<endl;
    cout<<d.empty()<<endl;
    for (deque<int>::iterator i=d.begin();i!=d.end();i++)
        cout<<*i<<" ";
}

