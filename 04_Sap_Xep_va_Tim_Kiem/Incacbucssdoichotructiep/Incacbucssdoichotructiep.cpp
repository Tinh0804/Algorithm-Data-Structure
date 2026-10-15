#include <bits/stdc++.h>
using namespace std;
void xuat(int mang[],int n)
{
	for (int i=0;i<n;i++)
	  cout<<mang[i]<<" ";
	cout<<endl;
}
void ss(int mang[],int n)
{
	for(int i=0;i<n-1;i++ )
	{
	  for (int j=i+1;j<n;j++)
	  {
	  	if (mang[i]>mang[j])
	  	  swap(mang[i],mang[j]);
	  }
	  cout<<"Buoc "<<i+1<<":";
	  xuat(mang,n);
    }
}
int main()
{
   int n;
   printf("Nhap so luong:");
   scanf("%d",&n);
   int a[n];
   for (int i=0;i<n;i++)
     scanf("%d",&a[i]);
   ss(a,n);
}

