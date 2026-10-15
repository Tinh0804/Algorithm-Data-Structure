#include <bits/stdc++.h>

using namespace std;

int main()
{
//	tinh chat ham set
//  tu dong xoa so hoac ki tu trung voi ki tu co trong set
// tu xap sep theo thu tu tang dan neu la so va ki tu
   set<int> s;//{}
   s.insert(2);//{2}
   s.insert(4);//{2,4}
   s.insert(3);//{2,3,4}
   s.insert(5);//{2,3,4,5}
   s.insert(5);//{2,3,4,5}
   cout<<s.size()<<endl;
   for(set<int>::iterator it=s.begin();it!=s.end();it++)
       cout<<*it<<" ";
//ham tim kiem trong set
//s.find("gia tri can tim") hoac dem gia tri giong nhau bang s.count("phan tu can dem")
//neu tim thay thi no se tra ve vi tri cua phan tu do
//con khong tim thay thi no se tra ve gia tri s.end()
   if (s.find(5)!=s.end())
       cout<<"FOUND";
   else
       cout<<"NO FOUND";
//neu muon xoa phan tu bat ki trong set
//ta dung s.erase("phan tu muon xoa")
   s.erase(5);
//ham multiset giong ham set
//chi khac nhau la multiset khong xoa cac phantu trong nhau
   multiset<int> mt;
   int n,x;
   cout<<"Nhap kich thuoc:";
   cin>>n;
   for (int i=0;i<n;i++)
   {
   	cin>>x;
   	mt.insert(x);
   }
   for (set<int>::iterator j=mt.begin();j!=mt.end();j++)
       cout<<*j<<" ";
//ham distance(vi tri 1,vi tri 2) tra ve khoang cach giua 2 phan tu
   cout<<endl<<distance(s.begin(),s.end());
}

