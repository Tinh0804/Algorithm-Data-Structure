#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
	  int n;
	  bool kt;
	  cin>>n;
	  int a[n];
	  for (int i=0;i<n;i++)
	     cin>>a[i];
	  cout<<"phan tu truoc khi xep sep\n";
	  for (int i=0;i<n;i++)
	     cout<<a[i]<<" ";
	  sort(a,a+n);//intro sort=quick-sort &heap-sort;
	  //neu muon xap xep giam dan thi ta dung
    //sort(a,a+n,greater<int>());if (@available(<#{i, mac, tv, watch}#>OS <#x.y.z#>, *)) {
    <#API available statements#>
} else {
	  //co th tu xay dung ham roi bo vao doi so thu3 trong sort
	  //vd:sort(a,a+n,ss)
	  //ss la ham tu xay dung de cho ham sort nhan biet ma xap xep
	  cout<<"mang sau khi xap xep la:\n";
	  for (int i=0;i<n;i++)
	      cout<<a[i]<<" ";
//	  ham tim kiem (binary_search)
// tim kiem nhi phan cung co the ap dung iterator nhu vector,set,pair
    kt=binary_search(a,a+n,2);
    if (kt==true)
       cout<<"\nFOUND";
    else
       cout<<"\nNOT FOUND";
//ham lower_bound(a,a+n,x) hoac lower_bound(a.begin(),a.end(),x)
//co tac dung tra ve vi tri con tro dau tien phan tu nam trong mang,vector <=x
//luu y:phai sap xep mang,vector;
    int *it=lower_bound(a,a+n,3);
    cout<<endl<<*it<<endl;
    cout<<(it-a)<<endl;
}

