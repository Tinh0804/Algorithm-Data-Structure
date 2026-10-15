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
	for (int i=0;i<n;i++)
	{
		int x=mang[i];
		int pos=i-1;
		while(pos>=0&&mang[pos]>x)
		{
			mang[pos+1]=mang[pos];
			pos--;
		}
		mang[pos+1]=x;
		cout<<"\nBuoc "<<i<<":";
		for (int j=0;j<=i;j++)
		  cout<<mang[j]<<" ";
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

