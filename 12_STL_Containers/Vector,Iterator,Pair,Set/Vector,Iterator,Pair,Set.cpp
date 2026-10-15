#include <iostream>
#include <vector>
using namespace std;

int main()
{
//	khai bao vector co 10 phan tu co kieu int
//  vector<int> v(10);//trong v co 10 phan tu rac
//  Neu khai bao vector<int> v(3,100)//{100,100,100}
   vector<int> v;//{}
   v.push_back(3);//{3}
   v.push_back(2);//{3,2}
   v.push_back(1);//{3,2,1}
   v.push_back(4);//{3,2,1,4}
   cout<<v.size()<<endl;
   cout<<v[2]<<endl;
   int a[]={5,6,2,7,1,9};
   cout<<"cach duyet for 1";
   for (int i=0;i<v.size();i++)
      cout<<v[i]<<",";
   cout<<endl;
//   cout<<"cach duyet for 2";
//   for (int i:a)
//      cout<<i<<",";
   vector<int>::iterator it=v.begin();//khai bao interrato it
   cout<<*it<<endl;
//   cout<<"cach duyet vector";
   vector<int>::iterator it2;
   for (it2=v.begin();it2!=v.end();it2++)
       cout<<*it<<" ";
//cach nhap tu ban phim vao vector
   vector<int> b;
   int n;
   cout<<"\nNhap so phan tu vector";
   cin>>n;
   for (int i=0;i<n;i++)
   {
   	int tmp;
   	cin>>tmp;
   	b.push_back(tmp);
   	}
   	vector<int>::iterator t;
   	for(t=b.begin();t!=b.end();t++)
   	   cout<<*t<<" ";
//Neu muon chen vao phan tu o vi tri bat kì trong vector thi ta dung v.insert(chi so,phantu chen)
//muon chen phan tu 10 vao vi tri v[3] thi
   vector<int>::iterator t1;
   v.insert(v.begin()+3,10);
   cout<<"\nvector sau khi chen:";
   for(t1=v.begin();t1!=v.end();t1++)
       cout<<*t1<" ";
//Neu muon xoa phan tu bat ki trong vector ta dung v.erase(chi so vi tri can xoa)
   v.erase(v.begin()+1);
//Neu muon xoa di phantu cuoi cua vector thi ra dung v.pop_back();
   v.pop_back();
//Neu muon gan cac phantu trong vector co cung gia tri thi ta dung v.assign(sophantu,giatri);
   int giatri=100;
   v.assign(4,giatri);//{100,100,100,100}
//Neu muon thay doi kich thuoc cua vector thi ta dung resize(n)
//Ta co the khai bao dung auto thay the vector<kieudukieu>::iterator t;
//  auto c=100;
//  cout<<endl<<*c<<endl;
//   pair<int,int>p;
   
   pair<char,long>h;
   //
   pair<int,int> p=make_pair(10,20);
   cout<<endl<<p.first<<" "<<p.second<<endl;
   pair<int,int>p1=p;
   cout<<p1.first<<" "<<p1.second<<endl;
//   pair long pair
   pair<int,pair<int,int> > k;
   k.first=10;
   k.second.first=20;
   k.second.second=30;
   cout<<k.first<<" "<<k.second.first<<"  "<<k.second.second<<endl;
}

