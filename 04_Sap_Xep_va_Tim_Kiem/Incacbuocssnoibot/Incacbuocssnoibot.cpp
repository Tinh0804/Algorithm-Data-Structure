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
	bool ok;
	for (int i=0;i<n-1;i++){
	    ok=false;	
		for (int j=0;j<n-i-1;j++)
		{
		  if (mang[j]>mang[j+1])
		    swap(mang[j],mang[j+1]);
		    ok=true;
	    }
	    if(ok)
	    {
	       cout<<"Buoc "<<i+1<<" ";
	       xuat(mang,n);
	    }
	    else break;
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

