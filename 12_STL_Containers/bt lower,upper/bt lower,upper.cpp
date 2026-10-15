#include <bits/stdc++.h>
using namespace std;


int main()
{
  int mang[10]={1,3,4,2,6,3,3,4,8,1};//{1,1,2,3,3,3,4,4,6,8}
  int n;
  cout<<"nhap so can tim:";
  cin>>n;
  sort(mang,mang+10);
  int *vtdt=lower_bound(mang,mang+10,n);
//  cout<<(vtdt-mang);//vi tri
  if (*vtdt==n)
     cout<<"Vi tri dau tien phan tu>= n trong mang:"<<vtdt-mang<<endl;
  else
     cout<<"Vi tri dau tien cua phan tu>= n trong mang:-1"<<endl;
  int *vtcc=upper_bound(mang,mang+10,n);
  if(*vtcc==mang[vtcc-mang])
    cout<<"Vi tri cuoi cung cua phan tu> n trong mang:"<<(vtcc-mang)<<endl;
  else
    cout<<"Vi tri cuoi cung cua phan tu >n trong mang:-1"<<endl;
  cout<<"Vi tri dau tien cua n trong mang:"<<vtdt-mang<<endl;
  vtcc--;
  cout<<"Vi tri cuoi cung cua n trong mang:"<<vtcc-mang<<endl;
  cout<<"so lan xuat hien cua n:"<<(vtcc-mang)-(vtdt-mang)+1<<endl;
    
}



